(let [N (read)]
  (dotimes [i 10]
    (printf "%d x %d = %d\n"
            (inc i)
            N
            (* (inc i) N))))

