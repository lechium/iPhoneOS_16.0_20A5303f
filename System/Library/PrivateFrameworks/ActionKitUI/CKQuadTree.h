//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKQuadTreeNode;

__attribute__((visibility("hidden")))
@interface CKQuadTree : NSObject
{
    CKQuadTreeNode *_rootNode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002af27
@property(readonly, nonatomic) CKQuadTreeNode *rootNode; // @synthesize rootNode=_rootNode;
- (void)visit:(CDUnknownBlockType)arg1;	// IMP=0x000000000002af07
- (id)initWithPoints:(id)arg1;	// IMP=0x000000000002aa0d
- (id)init;	// IMP=0x000000000002a9f9

@end
