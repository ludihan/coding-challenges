(dorun
  (map #(printf "%d^2 = %d\n" % (* % %))
       (range 2 (inc (read)) 2)))
