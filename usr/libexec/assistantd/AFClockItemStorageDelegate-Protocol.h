//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class AFClockItemStorage, NSSet;

@protocol AFClockItemStorageDelegate <NSObject>
- (void)clockItemStorageDidUpdate:(AFClockItemStorage *)arg1 insertedItemIDs:(NSSet *)arg2 updatedItemIDs:(NSSet *)arg3 deletedItemIDs:(NSSet *)arg4;
@end
