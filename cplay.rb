while a = gets.split("").map(&:to_i)
  count_a=0
  count_b=0
  x=0
  count = 0
  while x<20 
     
      count = x
      if x%2==0
        if a[x]==1
          count_a+=1
        end
      else
          if a[x]==1
            count_b+=1
          end
      end
      
      
      
    if x==5 && (count_a-count_b>=3 || count_b-count_a>=3 )
      
      break
    elsif (x==6) && ( count_a-count_b>=3 || count_b-count_a>=3 )
     count = x
      break
      elsif (x==7) && ( count_a-count_b>=2 || count_b-count_a>=2 )
     count = x
      break
    elsif (x==8 ) &&  ( count_a-count_b>1 || count_b-count_a>1 )
     count = x
      break
      
      elsif (x==9) && ( count_a-count_b>0 || count_b-count_a>0 )
      count = x
      break
      
    elsif x>=10 && x%2==1 && ( count_a-count_b>=1 || count_b-count_a>=1 ) 
      count = x+1
      break
    end
   
    x += 1
  end
  


  if count_a>count_b
    puts "TEAM-A #{count}"
  elsif count_a==count_b
      puts "TIE"
  else
      puts "TEAM-B #{count}"
  end
end
