(let [n (read)
      in (count (filter #(and (>= % 10) (<= % 20)) (repeatedly n read)))
      out (- n in) ]
  (printf "%d in\n%s out\n" in out ))
