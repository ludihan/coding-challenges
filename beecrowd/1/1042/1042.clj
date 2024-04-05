(let [numlist [(read)
               (read)
               (read)]]

  (dorun (map #(printf "%d\n" %) (sort numlist)))
  (newline)
  (dorun (map #(printf "%d\n" %) numlist)))
