/*
 *  linux/drivers/mmc/host/jz_mmc/dma/jz_mmc_dma.h
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * Copyright (c) Ingenic Semiconductor Co., Ltd.
 */

#ifndef __JZ_MMC_DMA_H__
#define __JZ_MMC_DMA_H__

#include <asm/jzmmc/jz_mmc_host.h>

struct jz_mmc_dma {

	int (*init) (struct jz_mmc_host *);
	void (*deinit) (struct jz_mmc_host *);
};

int jz_mmc_dma_register(struct jz_mmc_dma *dma);

void jz_mmc_start_dma(int chan, unsigned long phyaddr, int count, int mode, int ds);

void jz_mmc_start_scatter_dma(int chan, struct jz_mmc_host *host,
			      struct scatterlist *sg, unsigned int sg_len, int mode);

#endif /* __JZ_MMC_DMA_H__ */
