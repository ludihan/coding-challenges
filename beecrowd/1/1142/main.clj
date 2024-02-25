(doseq [n (range 1 (inc (* (read) 4)))]
  (cond
    (= (mod n 4) 0) (println "PUM")
    :else (print n "")))
