//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@interface _APMapEnumerator : NSEnumerator
{
    NSEnumerator *_srcEnumerator;	// 8 = 0x8
    CDUnknownBlockType _transformationBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000da6b7
@property(copy, nonatomic) CDUnknownBlockType transformationBlock; // @synthesize transformationBlock=_transformationBlock;
@property(retain, nonatomic) NSEnumerator *srcEnumerator; // @synthesize srcEnumerator=_srcEnumerator;
- (id)nextObject;	// IMP=0x00100000000da5c6

@end
