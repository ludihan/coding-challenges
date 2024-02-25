(dotimes [i (read)]
  (printf "%.1f\n"
          (/ (+ (* (read) 2)
                (* (read) 3)
                (* (read) 5)) 10)))
