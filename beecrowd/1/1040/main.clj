(let [media (/ (+ (* (read) 2) (* (read) 3)
                  (* (read) 4) (* (read) 1)) 10)]
  (do
    (printf "Media: %.1f\n" (float (/
                                    (Math/round (* media 100))
                                    100)))
    (cond
      (>= media 7.0) (println "Aluno aprovado.")
      (< media 5.0) (println "Aluno reprovado.")
      :else (let [exame (read)
                  final (/ (+ exame media) 2)]
              (if (< final 4.9) (println "Aluno reprovado")
                (do (println "Aluno em exame.")
                    (printf "Nota do exame: %.1f\n" exame)
                    (printf "Aluno aprovado.\nMedia final: %.1f\n" final)))))))

