class Uptime {
 public:
  Uptime() { start = millis(); }
  tick_t uptime() { return millis() - start; }
 private:
  tick_t start;
};
