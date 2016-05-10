#include "../../../include/linux/list.h"
#define hlist_add_head_rcu hlist_add_head
#define hlist_del_rcu hlist_del
#define hlist_for_each_entry_rcu hlist_for_each_entry
