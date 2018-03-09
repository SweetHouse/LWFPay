//
//  UIView+MASSShorthandAdditions.h
//  MASSonry
//
//  Created by Jonas Budelmann on 22/07/13.
//  Copyright (c) 2013 Jonas Budelmann. All rights reserved.
//

#import "View+MASSAdditions.h"

#ifdef MASS_SHORTHAND

/**
 *	Shorthand view additions without the 'MASS_' prefixes,
 *  only enabled if MASS_SHORTHAND is defined
 */
@interface MASS_VIEW (MASSShorthandAdditions)

@property (nonatomic, strong, readonly) MASSViewAttribute *left;
@property (nonatomic, strong, readonly) MASSViewAttribute *top;
@property (nonatomic, strong, readonly) MASSViewAttribute *right;
@property (nonatomic, strong, readonly) MASSViewAttribute *bottom;
@property (nonatomic, strong, readonly) MASSViewAttribute *leading;
@property (nonatomic, strong, readonly) MASSViewAttribute *trailing;
@property (nonatomic, strong, readonly) MASSViewAttribute *width;
@property (nonatomic, strong, readonly) MASSViewAttribute *height;
@property (nonatomic, strong, readonly) MASSViewAttribute *centerX;
@property (nonatomic, strong, readonly) MASSViewAttribute *centerY;
@property (nonatomic, strong, readonly) MASSViewAttribute *baseline;
@property (nonatomic, strong, readonly) MASSViewAttribute *(^attribute)(NSLayoutAttribute attr);

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)

@property (nonatomic, strong, readonly) MASSViewAttribute *firstBaseline;
@property (nonatomic, strong, readonly) MASSViewAttribute *lastBaseline;

#endif

#if TARGET_OS_IPHONE || TARGET_OS_TV

@property (nonatomic, strong, readonly) MASSViewAttribute *leftMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *rightMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *topMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *bottomMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *leadingMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *trailingMargin;
@property (nonatomic, strong, readonly) MASSViewAttribute *centerXWithinMargins;
@property (nonatomic, strong, readonly) MASSViewAttribute *centerYWithinMargins;

#endif

- (NSArray *)makeConstraints:(void(^)(MASSConstraintMaker *make))block;
- (NSArray *)updateConstraints:(void(^)(MASSConstraintMaker *make))block;
- (NSArray *)remakeConstraints:(void(^)(MASSConstraintMaker *make))block;

@end

#define MASS_ATTR_FORWARD(attr)  \
- (MASSViewAttribute *)attr {    \
    return [self MASS_##attr];   \
}

@implementation MASS_VIEW (MASSShorthandAdditions)

MASS_ATTR_FORWARD(top);
MASS_ATTR_FORWARD(left);
MASS_ATTR_FORWARD(bottom);
MASS_ATTR_FORWARD(right);
MASS_ATTR_FORWARD(leading);
MASS_ATTR_FORWARD(trailing);
MASS_ATTR_FORWARD(width);
MASS_ATTR_FORWARD(height);
MASS_ATTR_FORWARD(centerX);
MASS_ATTR_FORWARD(centerY);
MASS_ATTR_FORWARD(baseline);

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)

MASS_ATTR_FORWARD(firstBaseline);
MASS_ATTR_FORWARD(lastBaseline);

#endif

#if TARGET_OS_IPHONE || TARGET_OS_TV

MASS_ATTR_FORWARD(leftMargin);
MASS_ATTR_FORWARD(rightMargin);
MASS_ATTR_FORWARD(topMargin);
MASS_ATTR_FORWARD(bottomMargin);
MASS_ATTR_FORWARD(leadingMargin);
MASS_ATTR_FORWARD(trailingMargin);
MASS_ATTR_FORWARD(centerXWithinMargins);
MASS_ATTR_FORWARD(centerYWithinMargins);

#endif

- (MASSViewAttribute *(^)(NSLayoutAttribute))attribute {
    return [self MASS_attribute];
}

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
