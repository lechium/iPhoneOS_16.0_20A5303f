//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class RAPEditEntryPointViewController, RAPEntryPoint;

@protocol RAPEditEntryPointDelegate <NSObject>
- (void)editEntryPointController:(RAPEditEntryPointViewController *)arg1 willDismissWithViewMode:(long long)arg2;
- (RAPEntryPoint *)userDidRequestCreationOfEntryPointWithCoordinates:(struct CLLocationCoordinate2D)arg1 entryPointType:(long long)arg2;
- (void)userDidRequestModificationOfEntryPoint:(RAPEntryPoint *)arg1 withCoordinates:(struct CLLocationCoordinate2D)arg2 entryPointType:(long long)arg3;
- (void)userDidRequestDeletionOfEntryPoint:(RAPEntryPoint *)arg1;
@end

