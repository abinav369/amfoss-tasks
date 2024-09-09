IO.puts "Enter an odd number of rows for the diamond:"
n = String.to_integer(IO.gets(""))

for i <- 0..div(n, 2) do
  IO.puts String.duplicate(" ", div(n, 2) - i) <> String.duplicate("*", 2 * i + 1)
end

for i <- div(n, 2) - 1..0 do
  IO.puts String.duplicate(" ", div(n, 2) - i) <> String.duplicate("*", 2 * i + 1)
end
