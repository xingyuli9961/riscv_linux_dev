/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __LINUX_NET_XDP_PRIV_H__
#define __LINUX_NET_XDP_PRIV_H__

#include <linux/rhashtable.h>

/* Private to net/core/xdp.c, but used by trace/events/xdp.h */
struct xdp_mem_allocator {
	struct xdp_mem_info mem;
	union {
		void *allocator;
		struct page_pool *page_pool;
		struct zero_copy_allocator *zc_alloc;
	};
	int disconnect_cnt;
	unsigned long defer_start;
	struct rhash_head node;
	struct rcu_head rcu;
	struct delayed_work defer_wq;
	unsigned long defer_warn;
};

#endif /* __LINUX_NET_XDP_PRIV_H__ */
