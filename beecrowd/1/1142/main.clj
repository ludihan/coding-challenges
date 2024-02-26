(dorun
  (map
    #(if(= (mod % 4) 0) (println "PUM") (print % ""))
    (range 1 (inc (* (read) 4)))))
