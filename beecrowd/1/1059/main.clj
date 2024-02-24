(doall
  (map
    #(printf "%d\n" %)
    (filter even? (range 1 101))))
