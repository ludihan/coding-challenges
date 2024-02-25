(dorun
  (map #(printf "%d^2 = %d\n" % (* % %))
       (filter even? (range 1 (+ 1 (read))))))
