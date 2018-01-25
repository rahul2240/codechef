gets.to_i.times do
  
  a = gets.chomp.split("").map(&:to_s)
  b = a.length
  c = b/2
  fin=0
  
  if b%2==0
    d = a.slice(0,c)
    e = a.slice(c,b)
    d = d.sort
    e = e.sort
    if d==e
      fin = 1
    end
  else
    d = a.slice(0,c)
    e = a.slice(c+1,b)
    d = d.sort
    e = e.sort
    if d==e
      fin = 1
    end
  end
  
  if fin==0
    puts "NO"
  else
    puts "YES"
  end
  
end
