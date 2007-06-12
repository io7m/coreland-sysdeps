#include <Carbon/Carbon.h>
#include <CoreFoundation/CFBundle.h>

int main(void)
{
  CFBundleRef bun;

  bun = CFBundleGetMainBundle();
  if (!bun) return 1;
  return 0;
}
