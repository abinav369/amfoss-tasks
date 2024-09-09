puts "Enter a nubmer: "
n = gets.chomp.to_i
(0...(n + 1) / 2).each do |i|
    puts ' ' * ((n / 2) - i) + '*' * (2 * i + 1)
end
(0...(n / 2)).reverse_each do |i|
      puts ' ' * ((n / 2) - i) + '*' * (2 * i + 1)

end

  
  