#import <CoreFoundation/CoreFoundation.h>

int main() {
  CFMessagePortRef port = CFMessagePortCreateLocal(NULL, CFSTR("test"), NULL, NULL, NULL);
  printf("Port %s\n", (port != NULL ? "successfully created" : "could not be created"));
}
