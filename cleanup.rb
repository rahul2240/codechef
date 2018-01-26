gets.to_i.times do
  a = gets.split(" ").map(&:to_i)
  n = a[0]
  m = a[1]
  
  b = gets.split(" ").map(&:to_i)
  
  c = Array.new
  d = Array.new
  for x in 1..n
    c<<x  
  end
  
  d =  c-b
  
 d =  d.partition.with_index{|x,i|i.odd?}
  d[1].each do |x|
    print "#{x} "
  end
  puts
  d[0].each do |x|
    print "#{x} "
  end
  puts
end
