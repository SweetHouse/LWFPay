//
//  NSArray+MASSShorthandAdditions.h
//  MASSonry
//
//  Created by Jonas Budelmann on 22/07/13.
//  Copyright (c) 2013 Jonas Budelmann. All rights reserved.
//

#import "NSArray+MASSAdditions.h"

#ifdef MASS_SHORTHAND

/**
 *	Shorthand array additions without the 'MASS_' prefixes,
 *  only enabled if MASS_SHORTHAND is defined
 */
@interface NSArray (MASSShorthandAdditions)

- (NSArray *)makeConstraints:(void(^)(MASSConstraintMaker *make))block;
- (NSArray *)updateConstraints:(void(^)(MASSConstraintMaker *make))block;
- (NSArray *)remakeConstraints:(void(^)(MASSConstraintMaker *make))block;

@end

@implementation NSArray (MASSShorthandAdditions)

- (NSArray *)makeConstraints:(void(^)(MASSConstraintMaker *))block {
    return [self MASS_makeConstraints:block];
}

- (NSArray *)updateConstraints:(void(^)(MASSConstraintMaker *))block {
    return [self MASS_updateConstraints:block];
}

- (NSArray *)remakeConstraints:(void(^)(MASSConstraintMaker *))block {
    return [self MASS_remakeConstraints:block];
}

@end

#endif
