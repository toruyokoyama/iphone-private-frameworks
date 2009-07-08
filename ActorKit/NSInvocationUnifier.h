/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import <Foundation/NSProxy.h>

@class NSInvocation, Protocol;

@interface NSInvocationUnifier : NSProxy {
	NSInvocation* _curry;
	Protocol* _protocol;
}
-(id)initWithInvocation:(id)invocation protocol:(id)protocol;
-(void)dealloc;
-(void)forwardInvocation:(id)invocation;
-(id)methodSignatureForSelector:(SEL)selector;
@end

