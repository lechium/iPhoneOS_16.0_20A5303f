//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/NSObject-Protocol.h>

@class NSDictionary;

@protocol CNContactPickerServiceProtocol <NSObject>
- (void)invalidateSelectionAnimated:(_Bool)arg1;
- (void)setupWithOptions:(NSDictionary *)arg1 readyBlock:(void (^)(NSError *))arg2;
@end
