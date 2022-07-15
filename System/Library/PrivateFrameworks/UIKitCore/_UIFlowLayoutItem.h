//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIFlowLayoutRow, _UIFlowLayoutSection;

__attribute__((visibility("hidden")))
@interface _UIFlowLayoutItem : NSObject
{
    struct {
        unsigned int sizeEstimated:1;
        unsigned int positionEstimated:1;
        unsigned int sizeHasBeenSet:1;
    } _itemFlags;	// 8 = 0x8
    _UIFlowLayoutSection *_section;	// 16 = 0x10
    _UIFlowLayoutRow *_rowObject;	// 24 = 0x18
    struct CGRect _itemFrame;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000003aff16
- (id)copy;	// IMP=0x00000000003afe9e

@end
