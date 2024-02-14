(let [numlist [(read)
               (read)
               (read)]]

  (doseq [n (sort numlist)]
    (printf "%d\n" n))
  (newline)
  (doseq [n numlist]
    (printf "%d\n" n)))
