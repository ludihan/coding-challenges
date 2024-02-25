(let [N (read)]
  (dorun
    (map #(printf "%d\n" %)
         (filter
             #(== 2 (mod % N))
             (range 1 10001)))))
