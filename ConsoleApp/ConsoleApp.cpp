#include <AllStat/AllStat.h>

#include <map>
#include <stdio.h>

int main()
{
  AS_ITEM item;
  AS_ENUM_CONTEXT context;
  if (AllStatGetFirst(AS_GENERATOR::AS_ANY, &context, &item) == AS_SUCCESS)
  {
    std::map<AS_GENERATOR, bool> stat;
    do
    {
      stat[item.Generator] = true;

    } while (AllStatGetNext(&context, &item) == AS_SUCCESS);

    printf("List of generator modules:\n");
    for (auto it = stat.begin(); it != stat.end(); ++it)
    {
      std::string name = AllStat::GetGenerator(it->first);
      printf(" %s\n", name.c_str());
    }
  }
  return 0;
}