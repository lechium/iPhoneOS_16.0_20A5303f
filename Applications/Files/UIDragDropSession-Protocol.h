//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSArray, UIView;

@protocol UIDragDropSession <NSObject>
- (_Bool)canLoadObjectsOfClass:(Class)arg1;
- (_Bool)hasItemsConformingToTypeIdentifiers:(NSArray *)arg1;
- (_Bool)isRestrictedToDraggingApplication;
@property(nonatomic, readonly) _Bool allowsMoveOperation;
- (struct CGPoint)locationInView:(UIView *)arg1;
@property(nonatomic, readonly) NSArray *items;

// Remaining properties
@property(nonatomic, readonly) _Bool restrictedToDraggingApplication;
@end

