import os
import cv2
from PIL import Image, ImageDraw

# Expected range of files (based on your example)
expected_files = [f'Layer {i}.png' for i in range(1, 101)]  # Files from 1 to 100
assets_folder = '/home/abinav/git/amfoss-tasks/task-10/Operation-Pixel-Merge/assets/'
existing_files = set(os.listdir(assets_folder))  # Files that actually exist in the folder

stop_drawing = False
im = Image.new('RGB', (512, 512), color='white')
draw = ImageDraw.Draw(im)

def get_pixel(image):
    gray = cv2.cvtColor(image, cv2.COLOR_BGR2GRAY)
    non_white = cv2.findNonZero(cv2.threshold(gray, 254, 255, cv2.THRESH_BINARY_INV)[1])
    if non_white is not None:
        point = tuple(non_white[0][0])
        color = image[point[1], point[0]]
        return (point, color)
    return None

prev_point = None

for file_name in expected_files:
    if file_name in existing_files:
        print("Processing:", file_name)
        try:
            image = cv2.imread(os.path.join(assets_folder, file_name))
            point, new_color = get_pixel(image)
        except Exception as e:
            #print(f"Error processing file {file_name}: {e}")
            point = None
        
        if prev_point is None:  # Initialize prev_point for the first valid image
            prev_point = point
        
        if point is not None:
            if not stop_drawing:
                draw.line([prev_point, point], fill=(new_color[2], new_color[1], new_color[0]), width=3)
            prev_point = point  # Update prev_point to the current point
            stop_drawing = False
        else:
            stop_drawing = True
    else:
        #print(f"Missing file: {file_name}")
        stop_drawing = True  # Treat missing files as line breaks

im.save("/home/abinav/git/amfoss-tasks/task-10/Operation-Pixel-Merge/stitched_image.png", "PNG")
print("Finished!")
