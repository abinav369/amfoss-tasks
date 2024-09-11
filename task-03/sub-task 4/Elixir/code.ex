{:ok, content} = File.read("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/input.txt")
n = String.to_integer(String.trim(content))

File.write("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/Elixir/output.txt", "")

for i <- 0..div(n, 2) do
  File.write!("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/Elixir/output.txt", String.duplicate(" ", div(n, 2) - i) <> String.duplicate("*", 2 * i + 1) <> "\n", [:append])
end

for i <- div(n, 2) - 1..0 do
  File.write!("/home/abinav/git/amfoss-tasks/task-03/sub-task 4/Elixir/output.txt", String.duplicate(" ", div(n, 2) - i) <> String.duplicate("*", 2 * i + 1) <> "\n", [:append])
end
