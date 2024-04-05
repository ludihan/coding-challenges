(doall
  (map
    #(printf "%d\n" %)
    (range 1 (+ (read) 1) 2)))
