import click

@click.command()
@click.argument('file', type=click.Path(exists=True))
@click.option('-l', '--language', help="Enter the language for subtitle", )
@click.option('-o', '--output', help='Specify the output file', default='.' )
@click.option('-s', '--file-size', help='Enter the size of the movie', )
@click.option('-h', '--match-by-hash', help='Match subtitles by movie hash', )
@click.option('-b', '--batch-download', help='Enable Batch mode')
def subtitle(file):
    print(f"The path; {file}")

if __name__ == '__main__':
    subtitle()
