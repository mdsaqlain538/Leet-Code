class Solution {
public:
    vector<double> internalAngles(vector<int>& sides) {

        vector<double> result;

        sort(sides.begin(), sides.end());

        int a = sides[0];
        int b = sides[1];
        int c = sides[2];

        if (a + b <= c) {
            return {};
        }

        double cos_a = (double)(b*b + c*c - a*a) / (2.0 * b * c);
        double cos_b = (double)(a*a + c*c - b*b) / (2.0 * a * c);
        double cos_c = (double)(a*a + b*b - c*c) / (2.0 * a * b);

        cos_a = max(-1.0, min(1.0, cos_a));
        cos_b = max(-1.0, min(1.0, cos_b));
        cos_c = max(-1.0, min(1.0, cos_c));

        const double PI = acos(-1);

        double A = acos(cos_a) * 180.0 / PI;
        double B = acos(cos_b) * 180.0 / PI;
        double C = acos(cos_c) * 180.0 / PI;

        auto fix = [](double x) {
            const double eps = 1e-6;
            if (abs(x - 0.0) < eps) return 0.0;
            if (abs(x - 90.0) < eps) return 90.0;
            if (abs(x - 180.0) < eps) return 180.0;
            return x;
        };

        A = fix(A);
        B = fix(B);
        C = fix(C);

        auto round5 = [](double x) {
            return round(x * 100000.0) / 100000.0;
        };

        result.push_back(round5(A));
        result.push_back(round5(B));
        result.push_back(round5(C));

        sort(result.begin(), result.end());

        return result;
    }
};