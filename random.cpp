mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

long long rnd(long long l, long long r) {
    return (long long)(rng() % (r - l + 1)) + l;
}

long long rnd(long long r) {
    return rng() % r;
}

long double rndf() {
    return (long double)rng() / UINT_MAX;
}

long double rndf(long double l, long double r) {
    return rndf() * (r - l) + l;
}