//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSSet;
@protocol IDSUser;

@protocol IDSUserStoreProvider <NSObject>
- (void)forceRemoveUser:(id <IDSUser>)arg1 silently:(_Bool)arg2;
- (NSSet *)updatedUserSetForRealm:(long long)arg1 currentUsers:(NSSet *)arg2;
@end

