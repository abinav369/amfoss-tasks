n = File.read("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/input.txt").strip.to_i

File.open("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/Ruby/output.txt", "w") do |outfile|

  (0...(n + 1) / 2).each do |i|
    outfile.puts ' ' * ((n / 2) - i) + '*' * (2 * i + 1)
  end

  (0...(n / 2)).reverse_each do |i|
    outfile.puts ' ' * ((n / 2) - i) + '*' * (2 * i + 1)
  end
end
