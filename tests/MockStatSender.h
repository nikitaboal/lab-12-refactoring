// Copyright 2021 Your Name <your_email>

#ifndef LAB_12_REFACTORING_MOCKSTATSENDER_H
#define LAB_12_REFACTORING_MOCKSTATSENDER_H

#include <gmock/gmock.h>
#include <StatSender.hpp>


class MockStatSender : public StatSender {
 public:
  MOCK_METHOD(void, AsyncSend, (const std::vector<Item>&, const std::string_view&), (override));
};

#endif  // LAB_12_REFACTORING_MOCKSTATSENDER_H