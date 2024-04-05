(let [N (read)]
  (dorun
    (map #(if (== 2 (mod % N)) (printf "%d\n" %))
         (range 1 10001))))
