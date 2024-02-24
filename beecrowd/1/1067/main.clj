(doall
  (map
    #(printf "%d\n" %)
    (filter odd? (range 1 (+ (read) 1)))))
