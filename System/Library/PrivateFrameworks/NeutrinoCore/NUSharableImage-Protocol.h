//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NeutrinoCore/NSObject-Protocol.h>

@protocol NUSharableImage <NSObject>
- (int)useCount;
- (_Bool)decrementUseCount;
- (void)incrementUseCount;
- (_Bool)isInUse;
- (_Bool)isShared;
@end

