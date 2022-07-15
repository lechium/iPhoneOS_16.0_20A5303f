//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/NSObject-Protocol.h>

@class NSDictionary, NSString;
@protocol WFUserInterfaceHost, WFWorkflowNoInputBehaviorDelegate;

@protocol WFWorkflowNoInputBehavior <NSObject>
+ (_Bool)resolvesInput;
+ (NSString *)behaviorName;
- (NSDictionary *)serializedRepresentation;
- (id)initWithSerializedRepresentation:(NSDictionary *)arg1;
- (void)resolveWithUserInterface:(id <WFUserInterfaceHost>)arg1 runningDelegate:(id <WFWorkflowNoInputBehaviorDelegate>)arg2 completionHandler:(void (^)(WFContentCollection *, NSError *))arg3;
@end
