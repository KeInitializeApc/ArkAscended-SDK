#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AnalyticsBlueprintLibrary.AnalyticsBlueprintLibrary
class UAnalyticsBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UAnalyticsBlueprintLibrary* GetDefaultObj();

	bool StartSessionWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes);
	bool StartSession();
	void SetUserId(class FString* UserId);
	void SetSessionId(class FString* SessionId);
	void SetLocation(class FString* Location);
	void SetGender(class FString* Gender);
	void SetBuildInfo(class FString* BuildInfo);
	int32 SetAge();
	int32 RecordSimpleItemPurchaseWithAttributes(class FString* ItemID, const TArray<struct FAnalyticsEventAttr>& Attributes);
	int32 RecordSimpleItemPurchase(class FString* ItemID);
	void RecordSimpleCurrencyPurchaseWithAttributes(class FString* GameCurrencyType, int32* GameCurrencyAmount, const TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordSimpleCurrencyPurchase(class FString* GameCurrencyType, int32* GameCurrencyAmount);
	void RecordProgressWithFullHierarchyAndAttributes(class FString* ProgressType, TArray<class FString>* ProgressNames, const TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordProgressWithAttributes(class FString* ProgressType, class FString* ProgressName, const TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordProgress(class FString* ProgressType, class FString* ProgressName);
	int32 RecordItemPurchase(class FString* ItemID, class FString* Currency, int32* PerItemCost);
	void RecordEventWithAttributes(class FString* EventName, const TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordEventWithAttribute(class FString* EventName, class FString* AttributeName, class FString* AttributeValue);
	void RecordEvent(class FString* EventName);
	class FString RecordErrorWithAttributes(const TArray<struct FAnalyticsEventAttr>& Attributes);
	class FString RecordError();
	void RecordCurrencyPurchase(class FString* GameCurrencyType, int32* GameCurrencyAmount, class FString* RealCurrencyType, float* RealMoneyCost, class FString* PaymentProvider);
	void RecordCurrencyGivenWithAttributes(class FString* GameCurrencyType, int32* GameCurrencyAmount, const TArray<struct FAnalyticsEventAttr>& Attributes);
	void RecordCurrencyGiven(class FString* GameCurrencyType, int32* GameCurrencyAmount);
	struct FAnalyticsEventAttr MakeEventAttribute(class FString* AttributeName, class FString* AttributeValue);
	class FString GetUserId();
	class FString GetSessionId();
	void FlushEvents();
	void EndSession();
};

}


