//
//  MASSConstraint.h
//  MASSonry
//
//  Created by Jonas Budelmann on 22/07/13.
//  Copyright (c) 2013 cloudling. All rights reserved.
//

#import "MASSUtilities.h"

/**
 *	Enables Constraints to be created with chainable syntax
 *  Constraint can represent single NSLayoutConstraint (MASSViewConstraint) 
 *  or a group of NSLayoutConstraints (MASSComposisteConstraint)
 */
@interface MASSConstraint : NSObject

// Chaining Support

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASSConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeTop, NSLayoutAttributeLeft, NSLayoutAttributeBottom, NSLayoutAttributeRight
 */
- (MASSConstraint * (^)(MASSEdgeInsets insets))insets;

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASSConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeWidth, NSLayoutAttributeHeight
 */
- (MASSConstraint * (^)(CGSize offset))sizeOffset;

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASSConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeCenterX, NSLayoutAttributeCenterY
 */
- (MASSConstraint * (^)(CGPoint offset))centerOffset;

/**
 *	Modifies the NSLayoutConstraint constant
 */
- (MASSConstraint * (^)(CGFloat offset))offset;

/**
 *  Modifies the NSLayoutConstraint constant based on a value type
 */
- (MASSConstraint * (^)(NSValue *value))valueOffset;

/**
 *	Sets the NSLayoutConstraint multiplier property
 */
- (MASSConstraint * (^)(CGFloat multiplier))multipliedBy;

/**
 *	Sets the NSLayoutConstraint multiplier to 1.0/dividedBy
 */
- (MASSConstraint * (^)(CGFloat divider))dividedBy;

/**
 *	Sets the NSLayoutConstraint priority to a float or MASSLayoutPriority
 */
- (MASSConstraint * (^)(MASSLayoutPriority priority))priority;

/**
 *	Sets the NSLayoutConstraint priority to MASSLayoutPriorityLow
 */
- (MASSConstraint * (^)())priorityLow;

/**
 *	Sets the NSLayoutConstraint priority to MASSLayoutPriorityMedium
 */
- (MASSConstraint * (^)())priorityMedium;

/**
 *	Sets the NSLayoutConstraint priority to MASSLayoutPriorityHigh
 */
- (MASSConstraint * (^)())priorityHigh;

/**
 *	Sets the constraint relation to NSLayoutRelationEqual
 *  returns a block which accepts one of the following:
 *    MASSViewAttribute, UIView, NSValue, NSArray
 *  see readme for more details.
 */
- (MASSConstraint * (^)(id attr))equalTo;

/**
 *	Sets the constraint relation to NSLayoutRelationGreaterThanOrEqual
 *  returns a block which accepts one of the following:
 *    MASSViewAttribute, UIView, NSValue, NSArray
 *  see readme for more details.
 */
- (MASSConstraint * (^)(id attr))greaterThanOrEqualTo;

/**
 *	Sets the constraint relation to NSLayoutRelationLessThanOrEqual
 *  returns a block which accepts one of the following:
 *    MASSViewAttribute, UIView, NSValue, NSArray
 *  see readme for more details.
 */
- (MASSConstraint * (^)(id attr))lessThanOrEqualTo;

/**
 *	Optional semantic property which has no effect but improves the readability of constraint
 */
- (MASSConstraint *)with;

/**
 *	Optional semantic property which has no effect but improves the readability of constraint
 */
- (MASSConstraint *)and;

/**
 *	Creates a new MASSCompositeConstraint with the called attribute and reciever
 */
- (MASSConstraint *)left;
- (MASSConstraint *)top;
- (MASSConstraint *)right;
- (MASSConstraint *)bottom;
- (MASSConstraint *)leading;
- (MASSConstraint *)trailing;
- (MASSConstraint *)width;
- (MASSConstraint *)height;
- (MASSConstraint *)centerX;
- (MASSConstraint *)centerY;
- (MASSConstraint *)baseline;

#if (__IPHONE_OS_VERSION_MIN_REQUIRED >= 80000) || (__TV_OS_VERSION_MIN_REQUIRED >= 9000) || (__MAC_OS_X_VERSION_MIN_REQUIRED >= 101100)

- (MASSConstraint *)firstBaseline;
- (MASSConstraint *)lastBaseline;

#endif

#if TARGET_OS_IPHONE || TARGET_OS_TV

- (MASSConstraint *)leftMargin;
- (MASSConstraint *)rightMargin;
- (MASSConstraint *)topMargin;
- (MASSConstraint *)bottomMargin;
- (MASSConstraint *)leadingMargin;
- (MASSConstraint *)trailingMargin;
- (MASSConstraint *)centerXWithinMargins;
- (MASSConstraint *)centerYWithinMargins;

#endif


/**
 *	Sets the constraint debug name
 */
- (MASSConstraint * (^)(id key))key;

// NSLayoutConstraint constant Setters
// for use outside of MASS_updateConstraints/MASS_makeConstraints blocks

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASSConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeTop, NSLayoutAttributeLeft, NSLayoutAttributeBottom, NSLayoutAttributeRight
 */
- (void)setInsets:(MASSEdgeInsets)insets;

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASSConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeWidth, NSLayoutAttributeHeight
 */
- (void)setSizeOffset:(CGSize)sizeOffset;

/**
 *	Modifies the NSLayoutConstraint constant,
 *  only affects MASSConstraints in which the first item's NSLayoutAttribute is one of the following
 *  NSLayoutAttributeCenterX, NSLayoutAttributeCenterY
 */
- (void)setCenterOffset:(CGPoint)centerOffset;

/**
 *	Modifies the NSLayoutConstraint constant
 */
- (void)setOffset:(CGFloat)offset;


// NSLayoutConstraint Installation support

#if TARGET_OS_MAC && !(TARGET_OS_IPHONE || TARGET_OS_TV)
/**
 *  Whether or not to go through the animator proxy when modifying the constraint
 */
@property (nonatomic, copy, readonly) MASSConstraint *animator;
#endif

/**
 *  Activates an NSLayoutConstraint if it's supported by an OS. 
 *  Invokes install otherwise.
 */
- (void)activate;

/**
 *  Deactivates previously installed/activated NSLayoutConstraint.
 */
- (void)deactivate;

/**
 *	Creates a NSLayoutConstraint and adds it to the appropriate view.
 */
- (void)install;

/**
 *	Removes previously installed NSLayoutConstraint
 */
- (void)uninstall;

@end


/**
 *  Convenience auto-boxing macros for MASSConstraint methods.
 *
 *  Defining MASS_SHORTHAND_GLOBALS will turn on auto-boxing for default syntax.
 *  A potential drawback of this is that the unprefixed macros will appear in global scope.
 */
#define MASS_equalTo(...)                 equalTo(MASSBoxValue((__VA_ARGS__)))
#define MASS_greaterThanOrEqualTo(...)    greaterThanOrEqualTo(MASSBoxValue((__VA_ARGS__)))
#define MASS_lessThanOrEqualTo(...)       lessThanOrEqualTo(MASSBoxValue((__VA_ARGS__)))

#define MASS_offset(...)                  valueOffset(MASSBoxValue((__VA_ARGS__)))


#ifdef MASS_SHORTHAND_GLOBALS

#define equalTo(...)                     MASS_equalTo(__VA_ARGS__)
#define greaterThanOrEqualTo(...)        MASS_greaterThanOrEqualTo(__VA_ARGS__)
#define lessThanOrEqualTo(...)           MASS_lessThanOrEqualTo(__VA_ARGS__)

#define offset(...)                      MASS_offset(__VA_ARGS__)

#endif


@interface MASSConstraint (AutoboxingSupport)

/**
 *  Aliases to corresponding relation methods (for shorthand macros)
 *  Also needed to aid autocompletion
 */
- (MASSConstraint * (^)(id attr))MASS_equalTo;
- (MASSConstraint * (^)(id attr))MASS_greaterThanOrEqualTo;
- (MASSConstraint * (^)(id attr))MASS_lessThanOrEqualTo;

/**
 *  A dummy method to aid autocompletion
 */
- (MASSConstraint * (^)(id offset))MASS_offset;

@end
