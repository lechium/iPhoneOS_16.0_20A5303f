//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ScreenTimeCore/STSerializableManagedObject-Protocol.h>

@class NSDictionary, NSManagedObjectContext;

@protocol STUniquelySerializableManagedObject <STSerializableManagedObject>
+ (id)fetchOrCreateWithDictionaryRepresentation:(NSDictionary *)arg1 inContext:(NSManagedObjectContext *)arg2 error:(id *)arg3;
@end

