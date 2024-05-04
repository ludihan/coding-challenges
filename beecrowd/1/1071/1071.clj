(println (reduce + (filter odd? (apply range (sort [(read) (inc (read))])))))
