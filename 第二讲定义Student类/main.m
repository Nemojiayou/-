//
//  main.m
//  Student
//
//  Created by Nemo on 2022/7/18.
//

#import <Foundation/Foundation.h>
#import "student.h"
int main(int argc, const char * argv[]) {
    @autoreleasepool {
        Student *s1 = [Student new];
        
        s1->Name = @"Nemo";
        [s1 study:6.5f];
        
    }
    return 0;
}
