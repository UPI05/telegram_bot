#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	freopen("log", "w", stdout);
	string fileName = argv[1];
	string dt = "{\"chatHandle\": \"\", \"passwd\": \"\", \"fileName\": \"" + fileName + "\"}";
	system(("curl -i -X POST -H \"Content-Type: application/json\" -d \'" + dt + "\' https://YourVercelURL.vercel.app/api/sendPhoto").c_str());
	return 0;
}
