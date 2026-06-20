# Processing - (c) 2026 Example Org
FROM gcc:9

WORKDIR /app

COPY . .
RUN cmake -B build && cmake --build build

EXPOSE 3000

CMD ["sh", "-c", "./build/app"]
