#include <QGuiApplication>
#include "tlsource.h"

using namespace AL2HMIBridge;

TLSource::TLSource(QObject *parent)
     : SerializedSource(QLatin1String("TLSource"), parent)
     , PropertySubscriber()
     , MessageEventSubscriber()
     , m_fuelMainListType()
     , m_fuelPriceInfoLastUpdatDate()
     , m_fuelPriceInfoPrice1()
     , m_fuelPriceInfoPrice2()
     , m_fuelPriceInfoPrice3()
     , m_fuelPriceInfoPrice4()
     , m_fuelPriceInfoTypeName1()
     , m_fuelPriceInfoTypeName2()
     , m_fuelPriceInfoTypeName3()
     , m_fuelPriceInfoTypeName4()
     , m_fuelStationInfoAddress1()
     , m_fuelStationInfoAddress2()
     , m_fuelStationInfoName()
     , m_fuelStationInfoPhoneNum()
     , m_graphicalWeatherAlertPopEndtime()
     , m_graphicalWeatherAlertPopStartTime()
     , m_graphicalWeatherAlertPopType()
     , m_movieShowtimesMovieName()
     , m_movieShowtimesShowtimes()
     , m_movieShowtimesTheatreDate()
     , m_movieShowtimesTheatreName()
     , m_movieSynopsisActors()
     , m_movieSynopsisMovieName()
     , m_movieSynopsisRating()
     , m_movieSynopsisSynopsis()
     , m_movieTheatreInfoAddress1()
     , m_movieTheatreInfoAddress2()
     , m_movieTheatreInfoName()
     , m_movieTheatreInfoPhoneNum()
     , m_sportsDetailsDate()
     , m_sportsDetailsDivision()
     , m_sportsDetailsLastDate()
     , m_sportsDetailsLastScore()
     , m_sportsDetailsNextDate()
     , m_sportsDetailsNextTeam()
     , m_sportsDetailsNextTime()
     , m_sportsDetailsTeamName()
     , m_sportsEventInfoEventLoc()
     , m_sportsEventInfoEventName()
     , m_sportsEventResultsLeaderName()
     , m_sportsEventResultsRoundInfo()
     , m_sportsEventResultsRoundType()
     , m_sportsLeagueName()
     , m_sportsRaceDate()
     , m_sportsRaceName()
     , m_sportsScoreListDate()
     , m_tunerSATGameAlertInfo()
     , m_tunerSATGameAlertTeam1Name()
     , m_tunerSATGameAlertTeam2Name()
     , m_tLFav5DayWeatherLocation()
     , m_tLFavCurrWeather()
     , m_tLFavCurrWeatherLocation()
     , m_tLFavFuelName()
     , m_tLFavFuelPrice()
     , m_tLFavFuelType()
     , m_tLFavMovieTheaterName()
     , m_travelLinkBackseatSubscription()
     , m_travelLinkBackseatID()
     , m_travelLinkPhoneNum()
     , m_travelLinkRTTrafficSubscription()
     , m_travelLinkSatRadioSubscription()
     , m_travelLinkSiriusID()
     , m_travelLinkSiriusSubscription()
     , m_weatherCurrentForecast()
     , m_weatherCurrentLocation()
     , m_weatherDateTime()
     , m_weatherSkiCondLiftsOpen()
     , m_weatherSkiCondNewSnow()
     , m_weatherSkiCondNightSki()
     , m_weatherSkiCondOpStatus()
     , m_weatherSkiCondSnowCond()
     , m_weatherSkiCondSnowboarding()
     , m_weatherSkiCondSnowmaking()
     , m_weatherSkiCondTrailsOpen()
     , m_weatherSkiCondWindCond()
     , m_weatherSkiConditionsDateTime()
     , m_weatherSkiConditionsLocation()
     , m_weatherSkiForecast()

     , m_fuelPriceInfoType2Available(false)
     , m_fuelPriceInfoType3Available(false)
     , m_fuelPriceInfoType4Available(false)
     , m_sportsCategoriesHeadlinesAvailable(false)
     , m_sportsCategoriesHeadlinesEnabled(false)
     , m_sportsCategoriesResultsAvailable(false)
     , m_sportsCategoriesResultsEnabled(false)
     , m_sportsCategoriesScoresAvailable(false)
     , m_sportsCategoriesScoresEnabled(false)
     , m_sportsCategoriesTeamsAvailable(false)
     , m_sportsCategoriesTeamsEnabled(false)
     , m_sportsCategoriesTop25Available(false)
     , m_sportsCategoriesTop25Enabled(false)
     , m_sportsDetailsLastGameAvailable(false)
     , m_sportsDetailsNextGameAvailable(false)
     , m_sportsDetailsTeamIsFav(false)
     , m_sportsEventInfoEventInProgress(false)
     , m_sportsEventInfoEventIsGolf(false)
     , m_sportsEventInfoListenAvailable(false)
     , m_sportsLeagueisTeamBased(false)
     , m_tunerSATAddFavArtistAllowed(false)
     , m_tunerSATAddFavSongAllowed(false)
     , m_tunerSATGameScoreAlertSetting(false)
     , m_tunerSATGameScoreAlert(false)
     , m_tunerSATGameStartAlertSetting(false)
     , m_tunerSATGameStartAlert(false)
     , m_tunerSATPresetRecall(false)
     , m_travelLinkBackseatTVAvailable(false)
     , m_travelLinkBackseatTVIDAvailable(false)
     , m_travelLinkFavoritesDataAvailable(false)
     , m_travelLinkFuelPricesDataAvailable(false)
     , m_travelLinkMoviesDataAvailable(false)
     , m_travelLinkRTTrafficAvailable(false)
     , m_travelLinkWeatherDataAvailable(false)
     , m_travelLinkSportsDataAvailable(false)
     , m_travelLinkTrafficDataAvailable(false)
     , m_travelLinkWeatherMapDataAvailable(false)
     , m_weatherCurrentLocationIsFav(false)
     , m_fuelStationInfoIsFav(false)
     , m_weatherSkiInfoAvailable(false)
     , m_travelLinkSXMTrafficPlusSubscribed(false)
     , m_travelLinkSXMBackSeatSubscribed(false)
     , m_travelLinkSXMSubscribed(false)

     , m_fuelFavoriteStationID(-1)
     , m_fuelStationInfoID(-1)
     , m_graphicalWeatherAlertPopImageEnum(-1)
     , m_movieFavoriteTheatreID(-1)
     , m_movieSynopsisDurationHours(-1)
     , m_movieSynopsisDurationMinutes(-1)
     , m_movieTheatreInfoID(-1)
     , m_sportsLeagueDivisionType(-1)
     , m_sportsDetailsTeamID(-1)
     , m_sportsEventInfoListenSID(-1)
     , m_tunerSATErrorCodes(-1)
     , m_tunerSATFavAlertSetting(-1)
     , m_tunerSATGameAlertSID(-1)
     , m_tunerSATGameAlertTeam1Score(-1)
     , m_tunerSATGameAlertTeam2Score(-1)
     , m_tunerSATGameTeamsLeagueID(-1)
     , m_tunerSATPresetListSelectedItem(-1)
     , m_tLFav5DayWeatherAvailable(-1)
     , m_tLFav5DayWeatherDayOfWeek1(-1)
     , m_tLFav5DayWeatherImageEnum1(-1)
     , m_tLFav5DayWeatherImageEnum2(-1)
     , m_tLFav5DayWeatherImageEnum3(-1)
     , m_tLFav5DayWeatherImageEnum4(-1)
     , m_tLFav5DayWeatherImageEnum5(-1)
     , m_tLFav5DayWeatherTemp1(-1)
     , m_tLFav5DayWeatherTemp2(-1)
     , m_tLFav5DayWeatherTemp3(-1)
     , m_tLFav5DayWeatherTemp4(-1)
     , m_tLFav5DayWeatherTemp5(-1)
     , m_tLFavCurrWeatherAvailable(-1)
     , m_tLFavCurrWeatherPrecip(-1)
     , m_tLFavCurrWeatherTemp(-1)
     , m_tLFavFuelAvailable(-1)
     , m_tLFavMovieAvailable(-1)
     , m_travelLinkErrorCodes(-1)
     , m_travelLinkSubscriptionStatus(-1)
     , m_weather3HrPrecip(-1)
     , m_weather3HrTemperature(-1)
     , m_weather3hrImageEnum(-1)
     , m_weather6HrPrecip(-1)
     , m_weather6HrTemperature(-1)
     , m_weather6hrImageEnum(-1)
     , m_weatherCloudCoverEnum(-1)
     , m_weatherCurrHigh(-1)
     , m_weatherCurrLow(-1)
     , m_weatherCurrentTemp(-1)
     , m_weatherCurrentImageEnum(-1)
     , m_weatherCurrentFavImageEnum(-1)
     , m_weatherCurrentLocationID(-1)
     , m_weatherDay1Precip(-1)
     , m_weatherDay1HighTemp(-1)
     , m_weatherDay1ImageEnum(-1)
     , m_weatherDay1LowTemp(-1)
     , m_weatherDay2Precip(-1)
     , m_weatherDay2HighTemp(-1)
     , m_weatherDay2ImageEnum(-1)
     , m_weatherDay2LowTemp(-1)
     , m_weatherDay3Precip(-1)
     , m_weatherDay3HighTemp(-1)
     , m_weatherDay3ImageEnum(-1)
     , m_weatherDay3LowTemp(-1)
     , m_weatherDay4Precip(-1)
     , m_weatherDay4HighTemp(-1)
     , m_weatherDay4ImageEnum(-1)
     , m_weatherDay4LowTemp(-1)
     , m_weatherDay5Precip(-1)
     , m_weatherDay5HighTemp(-1)
     , m_weatherDay5ImageEnum(-1)
     , m_weatherDay5LowTemp(-1)
     , m_weatherForecastDayOfWeek1(-1)
     , m_weatherHumidityPercent(-1)
     , m_weatherPrecipDetails(-1)
     , m_weatherPrecipAmount(-1.0)
     , m_weatherSkiCondBaseDepthMax(-1)
     , m_weatherSkiCondBaseDepthMin(-1)
     , m_weatherSkiCondTemp(-1)
     , m_weatherSkiImageEnum(-1)
     , m_weatherUVIndex(-1)
     , m_weatherWindSpeed(-1)

     , m_fuelPriceSortingType(ByDistanceFuelPrices)
     , m_weatherType(WeatherCurrent)
     , m_currentLeagueId(-1)
     , m_currentDivisionId(-1)
     , m_currentEventId(-1)
     , m_scoreDetailsTeam1isFAV(false)
     , m_scoreDetailsTeam2isFAV(false)
     , m_scoreDetailsTeam1ID(-1)
     , m_scoreDetailsTeam2ID(-1)
     , m_scoreDetailsTeam1Scores(-1)
     , m_scoreDetailsTeam2Scores(-1)
     , m_scoreDetailsListenNational(false)
     , m_scoreDetailsListenAway(false)
     , m_scoreDetailsListenHome(false)
     , m_scoreDetailsClockHours(-1)
     , m_scoreDetailsClockMinutes(-1)
     , m_scoreDetailsListenAwayCh(-1)
     , m_scoreDetailsListenHomeCh(-1)
     , m_scoreDetailsListenNationalCh(-1)
     , m_scoreDetailsStartHours(-1)
     , m_scoreDetailsStartMinutes(-1)
     , m_scoreDetailsType(-1)

     , m_scoreScheduleModel(new MultiDPListModel(this))
     , m_resultsScheduleModel(new MultiDPListModel(this))
     , m_resultsGolfModel(new MultiDPListModel(this))
     , m_resultsRaceModel(new MultiDPListModel(this))
     , m_sportsLeaguesModel(new MultiDPListModel(this))
     , m_sportsLeagueDivisionsModel(new MultiDPListModel(this))
     , m_sportsScheduleDatesModel(new MultiDPListModel(this))
     , m_sportsLeagueTeamsModel(new MultiDPListModel(this))
     , m_sportsFavTeamsModel(new MultiDPListModel(this))
     , m_sportsLeagueHeadlinesModel(new DPListModel(DP_ID_Sports_Headlines_E_STR_LI, 0, this))
     , m_fuelPricesModel(new MultiDPListModel(this))
     , m_fuelTypesModel(new MultiDPListModel(this))
     , m_statesListModel(new MultiDPListModel(this))
     , m_cityListModel(new MultiDPListModel(this))
     , m_skiStatesListModel(new MultiDPListModel(this))
     , m_skiAreaListModel(new MultiDPListModel(this))
     , m_weatherCharIndex(new MultiDPListModel(this))
{
    PropertySubscriber::subscribeRange(MIN_TLRange1_DP_Value, MAX_TLRange1_DP_Value);
    PropertySubscriber::subscribeRange(MIN_TLRange2_DP_Value, MAX_TLRange2_DP_Value);

    MessageEventSubscriber::subscribe(EVENT_GRP_ID_Ic_TLWeather_AlphaJumpOpened);

    QList<QPair<QString, DPListModel*> > multiDPScoreSchedule;
    multiDPScoreSchedule << qMakePair(QLatin1String("time"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Time_E_STR_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("team1isFAV"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Team1isFAV_E_BOL_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("team2isFAV"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Team2isFAV_E_BOL_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("team1Names"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Team1Names_E_STR_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("team2Names"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Team2Names_E_STR_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("team1Abbrv"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Team1Abbrv_E_STR_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("team2Abbrv"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Team2Abbrv_E_STR_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("team1ID"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Team1ID_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("team2ID"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Team2ID_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("team1Scores"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Team1Scores_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("team2Scores"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Team2Scores_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("listenNational"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_ListenNationalAvailable_E_BOL_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("listenAway"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_ListenAwayAvailable_E_BOL_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("listenHome"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_ListenHomeAvailable_E_BOL_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("clockHours"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_ClockHours_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("clockMinutes"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_ClockMinutes_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("listenAwayCh"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_ListenAway_ChNo_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("listenHomeCh"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_ListenHome_ChNo_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("listenNationalCh"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_ListenNational_ChNo_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("startHours"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_StartHours_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("startMinutes"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_StartMinutes_E_INT_LI, 0, this));
    multiDPScoreSchedule << qMakePair(QLatin1String("scoreType"),
                                      new DPListModel(DP_ID_Sports_ScoreSchedule_Type_E_INT_LI, 0, this));
    m_scoreScheduleModel->setObjectSources(multiDPScoreSchedule);

    QList<QPair<QString, DPListModel*> > multiDPResultsSchedule;
    multiDPResultsSchedule << qMakePair(QLatin1String("eventLocation"),
                                        new DPListModel(DP_ID_Sports_EventResults_Location_E_STR_LI, 0, this));
    multiDPResultsSchedule << qMakePair(QLatin1String("eventName"),
                                        new DPListModel(DP_ID_Sports_EventResults_E_STR_LI, 0, this));
    multiDPResultsSchedule << qMakePair(QLatin1String("eventId"),
                                        new DPListModel(DP_ID_Sports_EventResults_IDs_E_INT_LI, 0, this));
    multiDPResultsSchedule << qMakePair(QLatin1String("eventType"),
                                        new DPListModel(DP_ID_Sports_EventResults_Type_E_INT_LI, 0, this));
    m_resultsScheduleModel->setObjectSources(multiDPResultsSchedule);

    QList<QPair<QString, DPListModel*> > multiDPResultsGolf;
    multiDPResultsGolf << qMakePair(QLatin1String("resultsName"),
                                    new DPListModel(DP_ID_Sports_GolfResults_E_STR_LI, 0, this));
    multiDPResultsGolf << qMakePair(QLatin1String("resultsHole"),
                                    new DPListModel(DP_ID_Sports_GolfResults_Hole_E_STR_LI, 0, this));
    multiDPResultsGolf << qMakePair(QLatin1String("resultsPlusMinus"),
                                    new DPListModel(DP_ID_Sports_GolfResults_PlusMinus_E_INT_LI, 0, this));
    multiDPResultsGolf << qMakePair(QLatin1String("resultsRound"),
                                    new DPListModel(DP_ID_Sports_GolfResults_Round_E_INT_LI, 0, this));
    multiDPResultsGolf << qMakePair(QLatin1String("resultsScore"),
                                    new DPListModel(DP_ID_Sports_GolfResults_Score_E_INT_LI, 0, this));
    m_resultsGolfModel->setObjectSources(multiDPResultsGolf);

    QList<QPair<QString, DPListModel*> > multiDPResultsRace;
    multiDPResultsRace << qMakePair(QLatin1String("resultsName"),
                                    new DPListModel(DP_ID_Sports_RaceResults_E_STR_LI, 0, this));
    multiDPResultsRace << qMakePair(QLatin1String("resultsLap"),
                                    new DPListModel(DP_ID_Sports_RaceResults_LapNumber_E_INT_LI, 0, this));
    m_resultsRaceModel->setObjectSources(multiDPResultsRace);

    QList<QPair<QString, DPListModel*> > multiDPSportsFavTeams;
    multiDPSportsFavTeams << qMakePair(QLatin1String("leagueID"),
                                       new DPListModel(DP_ID_TLFav_Sports_LeagueID_INT_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("teamID"),
                                       new DPListModel(DP_ID_TLFav_Sports_TeamID_INT_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("teamLeague"),
                                       new DPListModel(DP_ID_TLFav_SportsTeam_League_E_STR_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("teamName"),
                                       new DPListModel(DP_ID_TLFav_SportsTeam_Name_E_STR_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("available"),
                                       new DPListModel(DP_ID_TLFav_Sports_Available_E_INT_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("listenAwayAvailable"),
                                       new DPListModel(DP_ID_TLFav_Sports_ListenAwayAvailable_E_BOL_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("listenAwaySID"),
                                       new DPListModel(DP_ID_TLFav_Sports_ListenAwaySID_E_INT_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("listenHomeAvailable"),
                                       new DPListModel(DP_ID_TLFav_Sports_ListenHomeAvailable_E_BOL_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("listenHomeSID"),
                                       new DPListModel(DP_ID_TLFav_Sports_ListenHomeSID_E_INT_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("listenNationalSID"),
                                       new DPListModel(DP_ID_TLFav_Sports_ListenNationalSID_E_INT_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("offSeason"),
                                       new DPListModel(DP_ID_TLFav_Sports_OffSeason_E_BOL_LI, 0, this));
    multiDPSportsFavTeams << qMakePair(QLatin1String("listenNationalAvailable"),
                                       new DPListModel(DP_ID_TLFav_Sports_ListenNationalAvailable_E_BOL_LI, 0, this));
    m_sportsFavTeamsModel->setObjectSources(multiDPSportsFavTeams);

    QList<QPair<QString, DPListModel*> > multiDPFuelPrices;
    multiDPFuelPrices << qMakePair(QLatin1String("stationID"),
                                   new DPListModel(DP_ID_Fuel_StationIDs_E_INT_LI, 0, this));
    multiDPFuelPrices << qMakePair(QLatin1String("prices"),
                                   new DPListModel(DP_ID_Fuel_Prices_E_STR_LI, 0, this));
    multiDPFuelPrices << qMakePair(QLatin1String("brandName"),
                                   new DPListModel(DP_ID_Fuel_BrandName_E_STR_LI, 0, this));
    multiDPFuelPrices << qMakePair(QLatin1String("dates"),
                                   new DPListModel(DP_ID_Fuel_Dates_E_STR_LI, 0, this));
    multiDPFuelPrices << qMakePair(QLatin1String("distanceArrow"),
                                   new DPListModel(DP_ID_Fuel_DistanceArrow_E_INT_LI, 0, this));
    multiDPFuelPrices << qMakePair(QLatin1String("distance"),
                                   new DPListModel(DP_ID_Fuel_Distance_E_STR_LI, 0, this));
    m_fuelPricesModel->setObjectSources(multiDPFuelPrices);

    QList<QPair<QString, DPListModel*> > multiDPFuelTypes;
    multiDPFuelTypes << qMakePair(QLatin1String("typeSelected"),
                                  new DPListModel(DP_ID_Fuel_TypeList_Checked_E_BOL_LI, 0, this));
    multiDPFuelTypes << qMakePair(QLatin1String("typeId"),
                                  new DPListModel(DP_ID_Fuel_TypeList_IDs_E_INT_LI, 0, this));
    multiDPFuelTypes << qMakePair(QLatin1String("typeName"),
                                  new DPListModel(DP_ID_Fuel_TypeList_Names_E_STR_LI, 0, this));
    m_fuelTypesModel->setObjectSources(multiDPFuelTypes);

    connect(m_fuelTypesModel, &MultiDPListModel::dataChanged,
            this, &TLSource::selectedTypeNameChanged);

    QList<QPair<QString, DPListModel*> > multiDPSportsLeagues;
    multiDPSportsLeagues << qMakePair(QLatin1String("leagueId"),
                                      new DPListModel(DP_ID_Sports_LeagueID_E_INT_LI, 0, this));
    multiDPSportsLeagues << qMakePair(QLatin1String("leagueEnabled"),
                                      new DPListModel(DP_ID_Sports_LeagueName_isEnabled_E_BOL_LI, 0, this));
    multiDPSportsLeagues << qMakePair(QLatin1String("leagueName"),
                                      new DPListModel(DP_ID_Sports_LeagueNames_E_STR_LI, 0, this));
    m_sportsLeaguesModel->setObjectSources(multiDPSportsLeagues);

    QList<QPair<QString, DPListModel*> > multiDPSportsLeagueDivisions;
    multiDPSportsLeagueDivisions << qMakePair(QLatin1String("divisionId"),
                                              new DPListModel(DP_ID_Sports_Division_IDs_E_INT_LI, 0, this));
    multiDPSportsLeagueDivisions << qMakePair(QLatin1String("divisionName"),
                                              new DPListModel(DP_ID_Sports_DivisionNames_E_STR_LI, 0, this));
    m_sportsLeagueDivisionsModel->setObjectSources(multiDPSportsLeagueDivisions);

    QList<QPair<QString, DPListModel*> > multiDPSportsLeagueTeams;
    multiDPSportsLeagueTeams << qMakePair(QLatin1String("teamId"),
                                          new DPListModel(DP_ID_Sports_TeamIDs_E_INT_LI, 0, this));
    multiDPSportsLeagueTeams << qMakePair(QLatin1String("teamName"),
                                          new DPListModel(DP_ID_Sports_TeamNames_E_STR_LI, 0, this));
    m_sportsLeagueTeamsModel->setObjectSources(multiDPSportsLeagueTeams);

    QList<QPair<QString, DPListModel*> > multiDPSportsScheduleDates;
    multiDPSportsScheduleDates << qMakePair(QLatin1String("dateId"),
                                            new DPListModel(DP_ID_Sports_ScheduleDate_ID_E_INT_LI, 0, this));
    multiDPSportsScheduleDates << qMakePair(QLatin1String("dateName"),
                                            new DPListModel(DP_ID_Sports_ScheduleDates_E_STR_LI, 0, this));
    m_sportsScheduleDatesModel->setObjectSources(multiDPSportsScheduleDates);

    QList<QPair<QString, DPListModel*> > multiDPStatesList;
    multiDPStatesList << qMakePair(QLatin1String("stateName"),
                                   new DPListModel(DP_ID_Weather_StateNames_E_STR_LI, 0, this));
    multiDPStatesList << qMakePair(QLatin1String("stateId"),
                                   new DPListModel(DP_ID_Weather_StateID_E_INT_LI, 0, this));
    m_statesListModel->setObjectSources(multiDPStatesList);

    QList<QPair<QString, DPListModel*> > multiDPCityList;
    multiDPCityList << qMakePair(QLatin1String("cityName"),
                                 new DPListModel(DP_ID_Weather_CityNames_E_STR_LI, 0, this));
    multiDPCityList << qMakePair(QLatin1String("cityId"),
                                 new DPListModel(DP_ID_Weather_CityID_E_INT_LI, 0, this));
    m_cityListModel->setObjectSources(multiDPCityList);

    QList<QPair<QString, DPListModel*> > multiDPSkiStatesList;
    multiDPSkiStatesList << qMakePair(QLatin1String("stateName"),
                                      new DPListModel(DP_ID_Weather_SkiStateNames_E_STR_LI, 0, this));
    multiDPSkiStatesList << qMakePair(QLatin1String("stateId"),
                                      new DPListModel(DP_ID_Weather_SkiStateID_E_INT_LI, 0, this));
    m_skiStatesListModel->setObjectSources(multiDPSkiStatesList);

    QList<QPair<QString, DPListModel*> > multiDPSkiAreaList;
    multiDPSkiAreaList << qMakePair(QLatin1String("skiAreaName"),
                                    new DPListModel(DP_ID_Weather_SkiAreaNames_E_STR_LI, 0, this));
    multiDPSkiAreaList << qMakePair(QLatin1String("skiAreaId"),
                                    new DPListModel(DP_ID_Weather_SkiAreaID_E_INT_LI, 0, this));
    m_skiAreaListModel->setObjectSources(multiDPSkiAreaList);

    QList<QPair<QString, DPListModel*>> weatherCharIndexDPModels;
    weatherCharIndexDPModels.append(qMakePair(QLatin1String("available"),
                                              new DPListModel(DP_ID_Weather_KeyboardCharactersAvailable_E_BOL_LI, 0, this)));
    weatherCharIndexDPModels.append(qMakePair(QLatin1String("offset"),
                                              new DPListModel(DP_ID_Weather_KeyboardCharactersOffset_E_INT_LI, 0, this)));
    m_weatherCharIndex->setObjectSources(weatherCharIndexDPModels);
}

TLSource *TLSource::instance()
{
    static TLSource self;
    return &self;
}

void TLSource::propertyValueChanged(const quint32 id, const QVariant &value)
{
    switch (id) {
      case DP_ID_Fuel_MainList_Type_E_STR:
        if (m_fuelMainListType != value.toString()) {
            m_fuelMainListType = value.toString();
            emit fuelMainListTypeChanged(m_fuelMainListType);
        }
        break;
      case DP_ID_Fuel_PriceInfo_LastUpdatDate_E_STR:
        if (m_fuelPriceInfoLastUpdatDate != value.toString()) {
            m_fuelPriceInfoLastUpdatDate = value.toString();
            emit fuelPriceInfoLastUpdatDateChanged(m_fuelPriceInfoLastUpdatDate);
        }
        break;
      case DP_ID_Fuel_PriceInfo_Price1_E_STR:
        if (m_fuelPriceInfoPrice1 != value.toString()) {
            m_fuelPriceInfoPrice1 = value.toString();
            emit fuelPriceInfoPrice1Changed(m_fuelPriceInfoPrice1);
        }
        break;
      case DP_ID_Fuel_PriceInfo_Price2_E_STR:
        if (m_fuelPriceInfoPrice2 != value.toString()) {
            m_fuelPriceInfoPrice2 = value.toString();
            emit fuelPriceInfoPrice2Changed(m_fuelPriceInfoPrice2);
        }
        break;
      case DP_ID_Fuel_PriceInfo_Price3_E_STR:
        if (m_fuelPriceInfoPrice3 != value.toString()) {
            m_fuelPriceInfoPrice3 = value.toString();
            emit fuelPriceInfoPrice3Changed(m_fuelPriceInfoPrice3);
        }
        break;
      case DP_ID_Fuel_PriceInfo_Price4_E_STR:
        if (m_fuelPriceInfoPrice4 != value.toString()) {
            m_fuelPriceInfoPrice4 = value.toString();
            emit fuelPriceInfoPrice4Changed(m_fuelPriceInfoPrice4);
        }
        break;
      case DP_ID_Fuel_PriceInfo_TypeName1_E_STR:
        if (m_fuelPriceInfoTypeName1 != value.toString()) {
            m_fuelPriceInfoTypeName1 = value.toString();
            emit fuelPriceInfoTypeName1Changed(m_fuelPriceInfoTypeName1);
        }
        break;
      case DP_ID_Fuel_PriceInfo_TypeName2_E_STR:
        if (m_fuelPriceInfoTypeName2 != value.toString()) {
            m_fuelPriceInfoTypeName2 = value.toString();
            emit fuelPriceInfoTypeName2Changed(m_fuelPriceInfoTypeName2);
        }
        break;
      case DP_ID_Fuel_PriceInfo_TypeName3_E_STR:
        if (m_fuelPriceInfoTypeName3 != value.toString()) {
            m_fuelPriceInfoTypeName3 = value.toString();
            emit fuelPriceInfoTypeName3Changed(m_fuelPriceInfoTypeName3);
        }
        break;
      case DP_ID_Fuel_PriceInfo_TypeName4_E_STR:
        if (m_fuelPriceInfoTypeName4 != value.toString()) {
            m_fuelPriceInfoTypeName4 = value.toString();
            emit fuelPriceInfoTypeName4Changed(m_fuelPriceInfoTypeName4);
        }
        break;
      case DP_ID_Fuel_StationInfo_Address1_E_STR:
        if (m_fuelStationInfoAddress1 != value.toString()) {
            m_fuelStationInfoAddress1 = value.toString();
            emit fuelStationInfoAddress1Changed(m_fuelStationInfoAddress1);
        }
        break;
      case DP_ID_Fuel_StationInfo_Address2_E_STR:
        if (m_fuelStationInfoAddress2 != value.toString()) {
            m_fuelStationInfoAddress2 = value.toString();
            emit fuelStationInfoAddress2Changed(m_fuelStationInfoAddress2);
        }
        break;
      case DP_ID_Fuel_StationInfo_Name_E_STR:
        if (m_fuelStationInfoName != value.toString()) {
            m_fuelStationInfoName = value.toString();
            emit fuelStationInfoNameChanged(m_fuelStationInfoName);
        }
        break;
      case DP_ID_Fuel_StationInfo_PhoneNum_E_STR:
        if (m_fuelStationInfoPhoneNum != value.toString()) {
            m_fuelStationInfoPhoneNum = value.toString();
            emit fuelStationInfoPhoneNumChanged(m_fuelStationInfoPhoneNum);
        }
        break;
      case DP_ID_GraphicalWeather_AlertPop_Endtime_E_STR:
        if (m_graphicalWeatherAlertPopEndtime != value.toString()) {
            m_graphicalWeatherAlertPopEndtime = value.toString();
            emit graphicalWeatherAlertPopEndtimeChanged(m_graphicalWeatherAlertPopEndtime);
        }
        break;
      case DP_ID_GraphicalWeather_AlertPop_StartTime_E_STR:
        if (m_graphicalWeatherAlertPopStartTime != value.toString()) {
            m_graphicalWeatherAlertPopStartTime = value.toString();
            emit graphicalWeatherAlertPopStartTimeChanged(m_graphicalWeatherAlertPopStartTime);
        }
        break;
      case DP_ID_GraphicalWeather_AlertPop_Type_E_STR:
        if (m_graphicalWeatherAlertPopType != value.toString()) {
            m_graphicalWeatherAlertPopType = value.toString();
            emit graphicalWeatherAlertPopTypeChanged(m_graphicalWeatherAlertPopType);
        }
        break;
      case DP_ID_Movie_Showtimes_MovieName_E_STR:
        if (m_movieShowtimesMovieName != value.toString()) {
            m_movieShowtimesMovieName = value.toString();
            emit movieShowtimesMovieNameChanged(m_movieShowtimesMovieName);
        }
        break;
      case DP_ID_Movie_Showtimes_Showtimes_E_STR:
        if (m_movieShowtimesShowtimes != value.toString()) {
            m_movieShowtimesShowtimes = value.toString();
            emit movieShowtimesShowtimesChanged(m_movieShowtimesShowtimes);
        }
        break;
      case DP_ID_Movie_Showtimes_TheatreDate_E_STR:
        if (m_movieShowtimesTheatreDate != value.toString()) {
            m_movieShowtimesTheatreDate = value.toString();
            emit movieShowtimesTheatreDateChanged(m_movieShowtimesTheatreDate);
        }
        break;
      case DP_ID_Movie_Showtimes_TheatreName_E_STR:
        if (m_movieShowtimesTheatreName != value.toString()) {
            m_movieShowtimesTheatreName = value.toString();
            emit movieShowtimesTheatreNameChanged(m_movieShowtimesTheatreName);
        }
        break;
      case DP_ID_Movie_Synopsis_Actors_E_STR:
        if (m_movieSynopsisActors != value.toString()) {
            m_movieSynopsisActors = value.toString();
            emit movieSynopsisActorsChanged(m_movieSynopsisActors);
        }
        break;
      case DP_ID_Movie_Synopsis_MovieName_E_STR:
        if (m_movieSynopsisMovieName != value.toString()) {
            m_movieSynopsisMovieName = value.toString();
            emit movieSynopsisMovieNameChanged(m_movieSynopsisMovieName);
        }
        break;
      case DP_ID_Movie_Synopsis_Rating_E_STR:
        if (m_movieSynopsisRating != value.toString()) {
            m_movieSynopsisRating = value.toString();
            emit movieSynopsisRatingChanged(m_movieSynopsisRating);
        }
        break;
      case DP_ID_Movie_Synopsis_Synopsis_E_STR:
        if (m_movieSynopsisSynopsis != value.toString()) {
            m_movieSynopsisSynopsis = value.toString();
            emit movieSynopsisSynopsisChanged(m_movieSynopsisSynopsis);
        }
        break;
      case DP_ID_Movie_TheatreInfo_Address1_E_STR:
        if (m_movieTheatreInfoAddress1 != value.toString()) {
            m_movieTheatreInfoAddress1 = value.toString();
            emit movieTheatreInfoAddress1Changed(m_movieTheatreInfoAddress1);
        }
        break;
      case DP_ID_Movie_TheatreInfo_Address2_E_STR:
        if (m_movieTheatreInfoAddress2 != value.toString()) {
            m_movieTheatreInfoAddress2 = value.toString();
            emit movieTheatreInfoAddress2Changed(m_movieTheatreInfoAddress2);
        }
        break;
      case DP_ID_Movie_TheatreInfo_Name_E_STR:
        if (m_movieTheatreInfoName != value.toString()) {
            m_movieTheatreInfoName = value.toString();
            emit movieTheatreInfoNameChanged(m_movieTheatreInfoName);
        }
        break;
      case DP_ID_Movie_TheatreInfo_PhoneNum_E_STR:
        if (m_movieTheatreInfoPhoneNum != value.toString()) {
            m_movieTheatreInfoPhoneNum = value.toString();
            emit movieTheatreInfoPhoneNumChanged(m_movieTheatreInfoPhoneNum);
        }
        break;
      case DP_ID_Sports_Details_Date_E_STR:
        if (m_sportsDetailsDate != value.toString()) {
            m_sportsDetailsDate = value.toString();
            emit sportsDetailsDateChanged(m_sportsDetailsDate);
        }
        break;
      case DP_ID_Sports_Details_Division_E_STR:
        if (m_sportsDetailsDivision != value.toString()) {
            m_sportsDetailsDivision = value.toString();
            emit sportsDetailsDivisionChanged(m_sportsDetailsDivision);
        }
        break;
      case DP_ID_Sports_Details_LastDate_E_STR:
        if (m_sportsDetailsLastDate != value.toString()) {
            m_sportsDetailsLastDate = value.toString();
            emit sportsDetailsLastDateChanged(m_sportsDetailsLastDate);
        }
        break;
      case DP_ID_Sports_Details_LastScore_E_STR:
        if (m_sportsDetailsLastScore != value.toString()) {
            m_sportsDetailsLastScore = value.toString();
            emit sportsDetailsLastScoreChanged(m_sportsDetailsLastScore);
        }
        break;
      case DP_ID_Sports_Details_NextDate_E_STR:
        if (m_sportsDetailsNextDate != value.toString()) {
            m_sportsDetailsNextDate = value.toString();
            emit sportsDetailsNextDateChanged(m_sportsDetailsNextDate);
        }
        break;
      case DP_ID_Sports_Details_NextTeam_E_STR:
        if (m_sportsDetailsNextTeam != value.toString()) {
            m_sportsDetailsNextTeam = value.toString();
            emit sportsDetailsNextTeamChanged(m_sportsDetailsNextTeam);
        }
        break;
      case DP_ID_Sports_Details_NextTime_E_STR:
        if (m_sportsDetailsNextTime != value.toString()) {
            m_sportsDetailsNextTime = value.toString();
            emit sportsDetailsNextTimeChanged(m_sportsDetailsNextTime);
        }
        break;
      case DP_ID_Sports_Details_TeamName_E_STR:
        if (m_sportsDetailsTeamName != value.toString()) {
            m_sportsDetailsTeamName = value.toString();
            emit sportsDetailsTeamNameChanged(m_sportsDetailsTeamName);
        }
        break;
      case DP_ID_Sports_EventInfo_EventLoc_E_STR:
        if (m_sportsEventInfoEventLoc != value.toString()) {
            m_sportsEventInfoEventLoc = value.toString();
            emit sportsEventInfoEventLocChanged(m_sportsEventInfoEventLoc);
        }
        break;
      case DP_ID_Sports_EventInfo_EventName_E_STR:
        if (m_sportsEventInfoEventName != value.toString()) {
            m_sportsEventInfoEventName = value.toString();
            emit sportsEventInfoEventNameChanged(m_sportsEventInfoEventName);
        }
        break;
      case DP_ID_Sports_EventResults_LeaderName_E_STR:
        if (m_sportsEventResultsLeaderName != value.toString()) {
            m_sportsEventResultsLeaderName = value.toString();
            emit sportsEventResultsLeaderNameChanged(m_sportsEventResultsLeaderName);
        }
        break;
      case DP_ID_Sports_EventResults_RoundInfo_E_STR:
        if (m_sportsEventResultsRoundInfo != value.toString()) {
            m_sportsEventResultsRoundInfo = value.toString();
            emit sportsEventResultsRoundInfoChanged(m_sportsEventResultsRoundInfo);
        }
        break;
      case DP_ID_Sports_EventResults_RoundType_E_STR:
        if (m_sportsEventResultsRoundType != value.toString()) {
            m_sportsEventResultsRoundType = value.toString();
            emit sportsEventResultsRoundTypeChanged(m_sportsEventResultsRoundType);
        }
        break;
      case DP_ID_Sports_LeagueName_E_STR:
        if (m_sportsLeagueName != value.toString()) {
            m_sportsLeagueName = value.toString();
            emit sportsLeagueNameChanged(m_sportsLeagueName);
        }
        break;
      case DP_ID_Sports_RaceDate_E_STR:
        if (m_sportsRaceDate != value.toString()) {
            m_sportsRaceDate = value.toString();
            emit sportsRaceDateChanged(m_sportsRaceDate);
        }
        break;
      case DP_ID_Sports_RaceName_E_STR:
        if (m_sportsRaceName != value.toString()) {
            m_sportsRaceName = value.toString();
            emit sportsRaceNameChanged(m_sportsRaceName);
        }
        break;
      case DP_ID_Sports_ScoreList_Date_E_STR:
        if (m_sportsScoreListDate != value.toString()) {
            m_sportsScoreListDate = value.toString();
            emit sportsScoreListDateChanged(m_sportsScoreListDate);
        }
        break;
      case DP_ID_Tuner_SAT_GameAlert_Info_E_STR:
        if (m_tunerSATGameAlertInfo != value.toString()) {
            m_tunerSATGameAlertInfo = value.toString();
            emit tunerSATGameAlertInfoChanged(m_tunerSATGameAlertInfo);
        }
        break;
      case DP_ID_Tuner_SAT_GameAlert_Team1Name_E_STR:
        if (m_tunerSATGameAlertTeam1Name != value.toString()) {
            m_tunerSATGameAlertTeam1Name = value.toString();
            emit tunerSATGameAlertTeam1NameChanged(m_tunerSATGameAlertTeam1Name);
        }
        break;
      case DP_ID_Tuner_SAT_GameAlert_Team2Name_E_STR:
        if (m_tunerSATGameAlertTeam2Name != value.toString()) {
            m_tunerSATGameAlertTeam2Name = value.toString();
            emit tunerSATGameAlertTeam2NameChanged(m_tunerSATGameAlertTeam2Name);
        }
        break;
      case DP_ID_TLFav_5DayWeather_Location_E_STR:
        if (m_tLFav5DayWeatherLocation != value.toString()) {
            m_tLFav5DayWeatherLocation = value.toString();
            emit tLFav5DayWeatherLocationChanged(m_tLFav5DayWeatherLocation);
        }
        break;
      case DP_ID_TLFav_CurrWeather_E_STR:
        if (m_tLFavCurrWeather != value.toString()) {
            m_tLFavCurrWeather = value.toString();
            emit tLFavCurrWeatherChanged(m_tLFavCurrWeather);
        }
        break;
      case DP_ID_TLFav_CurrWeather_Location_E_STR:
        if (m_tLFavCurrWeatherLocation != value.toString()) {
            m_tLFavCurrWeatherLocation = value.toString();
            emit tLFavCurrWeatherLocationChanged(m_tLFavCurrWeatherLocation);
        }
        break;
      case DP_ID_TLFav_Fuel_Name_E_STR:
        if (m_tLFavFuelName != value.toString()) {
            m_tLFavFuelName = value.toString();
            emit tLFavFuelNameChanged(m_tLFavFuelName);
        }
        break;
      case DP_ID_TLFav_Fuel_Price_E_STR:
        if (m_tLFavFuelPrice != value.toString()) {
            m_tLFavFuelPrice = value.toString();
            emit tLFavFuelPriceChanged(m_tLFavFuelPrice);
        }
        break;
      case DP_ID_TLFav_Fuel_Type_E_STR:
        if (m_tLFavFuelType != value.toString()) {
            m_tLFavFuelType = value.toString();
            emit tLFavFuelTypeChanged(m_tLFavFuelType);
        }
        break;
      case DP_ID_TLFav_Movie_TheaterName_E_STR:
        if (m_tLFavMovieTheaterName != value.toString()) {
            m_tLFavMovieTheaterName = value.toString();
            emit tLFavMovieTheaterNameChanged(m_tLFavMovieTheaterName);
        }
        break;
      case DP_ID_TL_BackseatSubscription_E_STR:
        if (m_travelLinkBackseatSubscription != value.toString()) {
            m_travelLinkBackseatSubscription = value.toString();
            emit travelLinkBackseatSubscriptionChanged(m_travelLinkBackseatSubscription);
        }
        break;
      case DP_ID_TL_Backseat_ID_E_STR:
        if (m_travelLinkBackseatID != value.toString()) {
            m_travelLinkBackseatID = value.toString();
            emit travelLinkBackseatIDChanged(m_travelLinkBackseatID);
        }
        break;
      case DP_ID_TL_PhoneNum_E_STR:
        if (m_travelLinkPhoneNum != value.toString()) {
            m_travelLinkPhoneNum = value.toString();
            emit travelLinkPhoneNumChanged(m_travelLinkPhoneNum);
        }
        break;
      case DP_ID_TL_RTTrafficSubscription_E_STR:
        if (m_travelLinkRTTrafficSubscription != value.toString()) {
            m_travelLinkRTTrafficSubscription = value.toString();
            emit travelLinkRTTrafficSubscriptionChanged(m_travelLinkRTTrafficSubscription);
        }
        break;
      case DP_ID_TL_SatRadioSubscription_E_STR:
        if (m_travelLinkSatRadioSubscription != value.toString()) {
            m_travelLinkSatRadioSubscription = value.toString();
            emit travelLinkSatRadioSubscriptionChanged(m_travelLinkSatRadioSubscription);
        }
        break;
      case DP_ID_TL_Sirius_ID_E_STR:
        if (m_travelLinkSiriusID != value.toString()) {
            m_travelLinkSiriusID = value.toString();
            emit travelLinkSiriusIDChanged(m_travelLinkSiriusID);
        }
        break;
      case DP_ID_TL_TLSubscription_E_STR:
        if (m_travelLinkSiriusSubscription != value.toString()) {
            m_travelLinkSiriusSubscription = value.toString();
            emit travelLinkSiriusSubscriptionChanged(m_travelLinkSiriusSubscription);
        }
        break;
      case DP_ID_Weather_CurrentForecast_E_STR:
        if (m_weatherCurrentForecast != value.toString()) {
            m_weatherCurrentForecast = value.toString();
            emit weatherCurrentForecastChanged(m_weatherCurrentForecast);
        }
        break;
      case DP_ID_Weather_CurrentLocation_E_STR:
        if (m_weatherCurrentLocation != value.toString()) {
            m_weatherCurrentLocation = value.toString();
            emit weatherCurrentLocationChanged(m_weatherCurrentLocation);
        }
        break;
      case DP_ID_Weather_DateTime_E_STR:
        if (m_weatherDateTime != value.toString()) {
            m_weatherDateTime = value.toString();
            emit weatherDateTimeChanged(m_weatherDateTime);
        }
        break;
      case DP_ID_Weather_SkiCond_LiftsOpen_E_STR:
        if (m_weatherSkiCondLiftsOpen != value.toString()) {
            m_weatherSkiCondLiftsOpen = value.toString();
            emit weatherSkiCondLiftsOpenChanged(m_weatherSkiCondLiftsOpen);
        }
        break;
      case DP_ID_Weather_SkiCond_NewSnow_E_STR:
        if (m_weatherSkiCondNewSnow != value.toString()) {
            m_weatherSkiCondNewSnow = value.toString();
            emit weatherSkiCondNewSnowChanged(m_weatherSkiCondNewSnow);
        }
        break;
      case DP_ID_Weather_SkiCond_NightSki_E_STR:
        if (m_weatherSkiCondNightSki != value.toString()) {
            m_weatherSkiCondNightSki = value.toString();
            emit weatherSkiCondNightSkiChanged(m_weatherSkiCondNightSki);
        }
        break;
      case DP_ID_Weather_SkiCond_OpStatus_E_STR:
        if (m_weatherSkiCondOpStatus != value.toString()) {
            m_weatherSkiCondOpStatus = value.toString();
            emit weatherSkiCondOpStatusChanged(m_weatherSkiCondOpStatus);
        }
        break;
      case DP_ID_Weather_SkiCond_SnowCond_E_STR:
        if (m_weatherSkiCondSnowCond != value.toString()) {
            m_weatherSkiCondSnowCond = value.toString();
            emit weatherSkiCondSnowCondChanged(m_weatherSkiCondSnowCond);
        }
        break;
      case DP_ID_Weather_SkiCond_Snowboarding_E_STR:
        if (m_weatherSkiCondSnowboarding != value.toString()) {
            m_weatherSkiCondSnowboarding = value.toString();
            emit weatherSkiCondSnowboardingChanged(m_weatherSkiCondSnowboarding);
        }
        break;
      case DP_ID_Weather_SkiCond_Snowmaking_E_STR:
        if (m_weatherSkiCondSnowmaking != value.toString()) {
            m_weatherSkiCondSnowmaking = value.toString();
            emit weatherSkiCondSnowmakingChanged(m_weatherSkiCondSnowmaking);
        }
        break;
      case DP_ID_Weather_SkiCond_TrailsOpen_E_STR:
        if (m_weatherSkiCondTrailsOpen != value.toString()) {
            m_weatherSkiCondTrailsOpen = value.toString();
            emit weatherSkiCondTrailsOpenChanged(m_weatherSkiCondTrailsOpen);
        }
        break;
      case DP_ID_Weather_SkiCond_WindCond_E_STR:
        if (m_weatherSkiCondWindCond != value.toString()) {
            m_weatherSkiCondWindCond = value.toString();
            emit weatherSkiCondWindCondChanged(m_weatherSkiCondWindCond);
        }
        break;
      case DP_ID_Weather_SkiConditions_DateTime_E_STR:
        if (m_weatherSkiConditionsDateTime != value.toString()) {
            m_weatherSkiConditionsDateTime = value.toString();
            emit weatherSkiConditionsDateTimeChanged(m_weatherSkiConditionsDateTime);
        }
        break;
      case DP_ID_Weather_SkiConditions_Location_E_STR:
        if (m_weatherSkiConditionsLocation != value.toString()) {
            m_weatherSkiConditionsLocation = value.toString();
            emit weatherSkiConditionsLocationChanged(m_weatherSkiConditionsLocation);
        }
        break;
      case DP_ID_Weather_SkiForecast_E_STR:
        if (m_weatherSkiForecast != value.toString()) {
            m_weatherSkiForecast = value.toString();
            emit weatherSkiForecastChanged(m_weatherSkiForecast);
        }
        break;

      case DP_ID_Fuel_PriceInfo_Type2Available_E_BOL:
        if (m_fuelPriceInfoType2Available != value.toBool()) {
            m_fuelPriceInfoType2Available = value.toBool();
            emit fuelPriceInfoType2AvailableChanged(m_fuelPriceInfoType2Available);
        }
        break;
      case DP_ID_Fuel_PriceInfo_Type3Available_E_BOL:
        if (m_fuelPriceInfoType3Available != value.toBool()) {
            m_fuelPriceInfoType3Available = value.toBool();
            emit fuelPriceInfoType3AvailableChanged(m_fuelPriceInfoType3Available);
        }
        break;
      case DP_ID_Fuel_PriceInfo_Type4Available_E_BOL:
        if (m_fuelPriceInfoType4Available != value.toBool()) {
            m_fuelPriceInfoType4Available = value.toBool();
            emit fuelPriceInfoType4AvailableChanged(m_fuelPriceInfoType4Available);
        }
        break;
      case DP_ID_Sports_Categories_Headlines_Available_E_BOL:
        if (m_sportsCategoriesHeadlinesAvailable != value.toBool()) {
            m_sportsCategoriesHeadlinesAvailable = value.toBool();
            emit sportsCategoriesHeadlinesAvailableChanged(m_sportsCategoriesHeadlinesAvailable);
        }
        break;
      case DP_ID_Sports_Categories_Headlines_Enabled_E_BOL:
        if (m_sportsCategoriesHeadlinesEnabled != value.toBool()) {
            m_sportsCategoriesHeadlinesEnabled = value.toBool();
            emit sportsCategoriesHeadlinesEnabledChanged(m_sportsCategoriesHeadlinesEnabled);
        }
        break;
      case DP_ID_Sports_Categories_Results_Available_E_BOL:
        if (m_sportsCategoriesResultsAvailable != value.toBool()) {
            m_sportsCategoriesResultsAvailable = value.toBool();
            emit sportsCategoriesResultsAvailableChanged(m_sportsCategoriesResultsAvailable);
        }
        break;
      case DP_ID_Sports_Categories_Results_Enabled_E_BOL:
        if (m_sportsCategoriesResultsEnabled != value.toBool()) {
            m_sportsCategoriesResultsEnabled = value.toBool();
            emit sportsCategoriesResultsEnabledChanged(m_sportsCategoriesResultsEnabled);
        }
        break;
      case DP_ID_Sports_Categories_Scores_Available_E_BOL:
        if (m_sportsCategoriesScoresAvailable != value.toBool()) {
            m_sportsCategoriesScoresAvailable = value.toBool();
            emit sportsCategoriesScoresAvailableChanged(m_sportsCategoriesScoresAvailable);
        }
        break;
      case DP_ID_Sports_Categories_Scores_Enabled_E_BOL:
        if (m_sportsCategoriesScoresEnabled != value.toBool()) {
            m_sportsCategoriesScoresEnabled = value.toBool();
            emit sportsCategoriesScoresEnabledChanged(m_sportsCategoriesScoresEnabled);
        }
        break;
      case DP_ID_Sports_Categories_Teams_Available_E_BOL:
        if (m_sportsCategoriesTeamsAvailable != value.toBool()) {
            m_sportsCategoriesTeamsAvailable = value.toBool();
            emit sportsCategoriesTeamsAvailableChanged(m_sportsCategoriesTeamsAvailable);
        }
        break;
      case DP_ID_Sports_Categories_Teams_Enabled_E_BOL:
        if (m_sportsCategoriesTeamsEnabled != value.toBool()) {
            m_sportsCategoriesTeamsEnabled = value.toBool();
            emit sportsCategoriesTeamsEnabledChanged(m_sportsCategoriesTeamsEnabled);
        }
        break;
      case DP_ID_Sports_Categories_Top25_Available_E_BOL:
        if (m_sportsCategoriesTop25Available != value.toBool()) {
            m_sportsCategoriesTop25Available = value.toBool();
            emit sportsCategoriesTop25AvailableChanged(m_sportsCategoriesTop25Available);
        }
        break;
      case DP_ID_Sports_Categories_Top25_Enabled_E_BOL:
        if (m_sportsCategoriesTop25Enabled != value.toBool()) {
            m_sportsCategoriesTop25Enabled = value.toBool();
            emit sportsCategoriesTop25EnabledChanged(m_sportsCategoriesTop25Enabled);
        }
        break;
      case DP_ID_Sports_Details_LastGame_Available_E_BOL:
        if (m_sportsDetailsLastGameAvailable != value.toBool()) {
            m_sportsDetailsLastGameAvailable = value.toBool();
            emit sportsDetailsLastGameAvailableChanged(m_sportsDetailsLastGameAvailable);
        }
        break;
      case DP_ID_Sports_Details_NextGame_Available_E_BOL:
        if (m_sportsDetailsNextGameAvailable != value.toBool()) {
            m_sportsDetailsNextGameAvailable = value.toBool();
            emit sportsDetailsNextGameAvailableChanged(m_sportsDetailsNextGameAvailable);
        }
        break;
      case DP_ID_Sports_Details_TeamIsFav_E_BOL:
        if (m_sportsDetailsTeamIsFav != value.toBool()) {
            m_sportsDetailsTeamIsFav = value.toBool();
            emit sportsDetailsTeamIsFavChanged(m_sportsDetailsTeamIsFav);
        }
        break;
      case DP_ID_Sports_EventInfo_EventInProgress_E_BOL:
        if (m_sportsEventInfoEventInProgress != value.toBool()) {
            m_sportsEventInfoEventInProgress = value.toBool();
            emit sportsEventInfoEventInProgressChanged(m_sportsEventInfoEventInProgress);
        }
        break;
      case DP_ID_Sports_EventInfo_EventIsGolf_E_BOL:
        if (m_sportsEventInfoEventIsGolf != value.toBool()) {
            m_sportsEventInfoEventIsGolf = value.toBool();
            emit sportsEventInfoEventIsGolfChanged(m_sportsEventInfoEventIsGolf);
        }
        break;
      case DP_ID_Sports_EventInfo_ListenAvailable_E_BOL:
        if (m_sportsEventInfoListenAvailable != value.toBool()) {
            m_sportsEventInfoListenAvailable = value.toBool();
            emit sportsEventInfoListenAvailableChanged(m_sportsEventInfoListenAvailable);
        }
        break;
      case DP_ID_Sports_LeagueisTeamBased_E_BOL:
        if (m_sportsLeagueisTeamBased != value.toBool()) {
            m_sportsLeagueisTeamBased = value.toBool();
            emit sportsLeagueisTeamBasedChanged(m_sportsLeagueisTeamBased);
        }
        break;
      case DP_ID_Tuner_SAT_AddFavArtistAllowed_E_BOL:
        if (m_tunerSATAddFavArtistAllowed != value.toBool()) {
            m_tunerSATAddFavArtistAllowed = value.toBool();
            emit tunerSATAddFavArtistAllowedChanged(m_tunerSATAddFavArtistAllowed);
        }
        break;
      case DP_ID_Tuner_SAT_AddFavSongAllowed_E_BOL:
        if (m_tunerSATAddFavSongAllowed != value.toBool()) {
            m_tunerSATAddFavSongAllowed = value.toBool();
            emit tunerSATAddFavSongAllowedChanged(m_tunerSATAddFavSongAllowed);
        }
        break;
      case DP_ID_Tuner_SAT_GameScoreAlert_Setting_E_BOL:
        if (m_tunerSATGameScoreAlertSetting != value.toBool()) {
            m_tunerSATGameScoreAlertSetting = value.toBool();
            emit tunerSATGameScoreAlertSettingChanged(m_tunerSATGameScoreAlertSetting);
        }
        break;
      case DP_ID_Tuner_SAT_GameScore_Alert_I_BOL:
        if (m_tunerSATGameScoreAlert != value.toBool()) {
            m_tunerSATGameScoreAlert = value.toBool();
            emit tunerSATGameScoreAlertChanged(m_tunerSATGameScoreAlert);
        }
        break;
      case DP_ID_Tuner_SAT_GameStartAlert_Setting_E_BOL:
        if (m_tunerSATGameStartAlertSetting != value.toBool()) {
            m_tunerSATGameStartAlertSetting = value.toBool();
            emit tunerSATGameStartAlertSettingChanged(m_tunerSATGameStartAlertSetting);
        }
        break;
      case DP_ID_Tuner_SAT_GameStart_Alert_I_BOL:
        if (m_tunerSATGameStartAlert != value.toBool()) {
            m_tunerSATGameStartAlert = value.toBool();
            emit tunerSATGameStartAlertChanged(m_tunerSATGameStartAlert);
        }
        break;
      case DP_ID_Tuner_SAT_PresetRecall_IP_BOL:
        if (m_tunerSATPresetRecall != value.toBool()) {
            m_tunerSATPresetRecall = value.toBool();
            emit tunerSATPresetRecallChanged(m_tunerSATPresetRecall);
        }
        break;
      case DP_ID_TL_BackseatTV_Available_E_BOL:
        if (m_travelLinkBackseatTVAvailable != value.toBool()) {
            m_travelLinkBackseatTVAvailable = value.toBool();
            emit travelLinkBackseatTVAvailableChanged(m_travelLinkBackseatTVAvailable);
        }
        break;
      case DP_ID_TL_BackseatTV_ID_Available_E_BOL:
        if (m_travelLinkBackseatTVIDAvailable != value.toBool()) {
            m_travelLinkBackseatTVIDAvailable = value.toBool();
            emit travelLinkBackseatTVIDAvailableChanged(m_travelLinkBackseatTVIDAvailable);
        }
        break;
      case DP_ID_TL_Favorites_DataAvailable_E_BOL:
        if (m_travelLinkFavoritesDataAvailable != value.toBool()) {
            m_travelLinkFavoritesDataAvailable = value.toBool();
            emit travelLinkFavoritesDataAvailableChanged(m_travelLinkFavoritesDataAvailable);
        }
        break;
      case DP_ID_TL_FuelPrices_DataAvailable_E_BOL:
        if (m_travelLinkFuelPricesDataAvailable != value.toBool()) {
            m_travelLinkFuelPricesDataAvailable = value.toBool();
            emit travelLinkFuelPricesDataAvailableChanged(m_travelLinkFuelPricesDataAvailable);
        }
        break;
      case DP_ID_TL_Movies_DataAvailable_E_BOL:
        if (m_travelLinkMoviesDataAvailable != value.toBool()) {
            m_travelLinkMoviesDataAvailable = value.toBool();
            emit travelLinkMoviesDataAvailableChanged(m_travelLinkMoviesDataAvailable);
        }
        break;
      case DP_ID_TL_RTTraffic_Available_E_BOL:
        if (m_travelLinkRTTrafficAvailable != value.toBool()) {
            m_travelLinkRTTrafficAvailable = value.toBool();
            emit travelLinkRTTrafficAvailableChanged(m_travelLinkRTTrafficAvailable);
        }
        break;
      case DP_ID_TL_Weather_DataAvailable_E_BOL:
        if (m_travelLinkWeatherDataAvailable != value.toBool()) {
            m_travelLinkWeatherDataAvailable = value.toBool();
            emit travelLinkWeatherDataAvailableChanged(m_travelLinkWeatherDataAvailable);
        }
        break;
      case DP_ID_TL_Sports_DataAvailable_E_BOL:
        if (m_travelLinkSportsDataAvailable != value.toBool()) {
            m_travelLinkSportsDataAvailable = value.toBool();
            emit travelLinkSportsDataAvailableChanged(m_travelLinkSportsDataAvailable);
        }
        break;
      case DP_ID_TL_Traffic_DataAvailable_E_BOL:
        if (m_travelLinkTrafficDataAvailable != value.toBool()) {
            m_travelLinkTrafficDataAvailable = value.toBool();
            emit travelLinkTrafficDataAvailableChanged(m_travelLinkTrafficDataAvailable);
        }
        break;
      case DP_ID_TL_WeatherMap_DataAvailable_E_BOL:
        if (m_travelLinkWeatherMapDataAvailable != value.toBool()) {
            m_travelLinkWeatherMapDataAvailable = value.toBool();
            emit travelLinkWeatherMapDataAvailableChanged(m_travelLinkWeatherMapDataAvailable);
        }
        break;
      case DP_ID_Weather_CurrentLocation_isFav_E_BOL:
        if (m_weatherCurrentLocationIsFav != value.toBool()) {
            m_weatherCurrentLocationIsFav = value.toBool();
            emit weatherCurrentLocationIsFavChanged(m_weatherCurrentLocationIsFav);
        }
        break;
      case DP_ID_Fuel_StationInfo_isFav_E_BOL:
        if (m_fuelStationInfoIsFav != value.toBool()) {
            m_fuelStationInfoIsFav = value.toBool();
            emit fuelStationInfoIsFavChanged(m_fuelStationInfoIsFav);
        }
        break;
      case DP_ID_Weather_SkiInfo_Available_E_BOL:
        if (m_weatherSkiInfoAvailable != value.toBool()) {
            m_weatherSkiInfoAvailable = value.toBool();
            emit weatherSkiInfoAvailableChanged(m_weatherSkiInfoAvailable);
        }
        break;
    case DP_ID_TL_SXMTrafficPlus_Subscribed_E_BOL:
        if (m_travelLinkSXMTrafficPlusSubscribed != value.toBool()) {
            m_travelLinkSXMTrafficPlusSubscribed = value.toBool();
            emit travelLinkSXMTrafficPlusSubscribedChanged(m_travelLinkSXMTrafficPlusSubscribed);
        }
        break;
    case DP_ID_TL_SXMBackSeat_Subscribed_E_BOL:
        if (m_travelLinkSXMBackSeatSubscribed != value.toBool()) {
            m_travelLinkSXMBackSeatSubscribed = value.toBool();
            emit travelLinkSXMBackSeatSubscribedChanged(m_travelLinkSXMBackSeatSubscribed);
        }
        break;
    case DP_ID_TL_SXM_Subscribed_E_BOL:
        if (m_travelLinkSXMSubscribed != value.toBool()) {
            m_travelLinkSXMSubscribed = value.toBool();
            emit travelLinkSXMSubscribedChanged(m_travelLinkSXMSubscribed);
        }
        break;

      case DP_ID_Fuel_FavoriteStation_ID_E_INT:
        if (m_fuelFavoriteStationID != value.toInt()) {
            m_fuelFavoriteStationID = value.toInt();
            emit fuelFavoriteStationIDChanged(m_fuelFavoriteStationID);
        }
        break;
      case DP_ID_Fuel_StationInfo_ID_E_INT:
        if (m_fuelStationInfoID != value.toInt()) {
            m_fuelStationInfoID = value.toInt();
            emit fuelStationInfoIDChanged(m_fuelStationInfoID);
        }
        break;
      case DP_ID_GraphicalWeather_AlertPop_ImageEnum_E_INT:
        if (m_graphicalWeatherAlertPopImageEnum != value.toInt()) {
            m_graphicalWeatherAlertPopImageEnum = value.toInt();
            emit graphicalWeatherAlertPopImageEnumChanged(m_graphicalWeatherAlertPopImageEnum);
        }
        break;
      case DP_ID_Movie_FavoriteTheatre_ID_E_INT:
        if (m_movieFavoriteTheatreID != value.toInt()) {
            m_movieFavoriteTheatreID = value.toInt();
            emit movieFavoriteTheatreIDChanged(m_movieFavoriteTheatreID);
        }
        break;
      case DP_ID_Movie_Synopsis_Duration_Hours_E_INT:
        if (m_movieSynopsisDurationHours != value.toInt()) {
            m_movieSynopsisDurationHours = value.toInt();
            emit movieSynopsisDurationHoursChanged(m_movieSynopsisDurationHours);
        }
        break;
      case DP_ID_Movie_Synopsis_Duration_Minutes_E_INT:
        if (m_movieSynopsisDurationMinutes != value.toInt()) {
            m_movieSynopsisDurationMinutes = value.toInt();
            emit movieSynopsisDurationMinutesChanged(m_movieSynopsisDurationMinutes);
        }
        break;
      case DP_ID_Movie_TheatreInfo_ID_E_INT:
        if (m_movieTheatreInfoID != value.toInt()) {
            m_movieTheatreInfoID = value.toInt();
            emit movieTheatreInfoIDChanged(m_movieTheatreInfoID);
        }
        break;
      case DP_ID_Sports_League_DivisionType_E_INT:
        if (m_sportsLeagueDivisionType != value.toInt()) {
            m_sportsLeagueDivisionType = value.toInt();
            emit sportsLeagueDivisionTypeChanged(m_sportsLeagueDivisionType);
        }
        break;
      case DP_ID_Sports_Details_TeamID_E_INT:
        if (m_sportsDetailsTeamID != value.toInt()) {
            m_sportsDetailsTeamID = value.toInt();
            emit sportsDetailsTeamIDChanged(m_sportsDetailsTeamID);
        }
        break;
      case DP_ID_Sports_EventInfo_ListenSID_E_INT:
        if (m_sportsEventInfoListenSID != value.toInt()) {
            m_sportsEventInfoListenSID = value.toInt();
            emit sportsEventInfoListenSIDChanged(m_sportsEventInfoListenSID);
        }
        break;
      case DP_ID_Tuner_SAT_ErrorCodes_E_INT:
        if (m_tunerSATErrorCodes != value.toInt()) {
            m_tunerSATErrorCodes = value.toInt();
            emit tunerSATErrorCodesChanged(m_tunerSATErrorCodes);
        }
        break;
      case DP_ID_Tuner_SAT_FavAlertSetting_E_INT:
        if (m_tunerSATFavAlertSetting != value.toInt()) {
            m_tunerSATFavAlertSetting = value.toInt();
            emit tunerSATFavAlertSettingChanged(m_tunerSATFavAlertSetting);
        }
        break;
      case DP_ID_Tuner_SAT_GameAlert_SID_INT:
        if (m_tunerSATGameAlertSID != value.toInt()) {
            m_tunerSATGameAlertSID = value.toInt();
            emit tunerSATGameAlertSIDChanged(m_tunerSATGameAlertSID);
        }
        break;
      case DP_ID_Tuner_SAT_GameAlert_Team1Score_E_INT:
        if (m_tunerSATGameAlertTeam1Score != value.toInt()) {
            m_tunerSATGameAlertTeam1Score = value.toInt();
            emit tunerSATGameAlertTeam1ScoreChanged(m_tunerSATGameAlertTeam1Score);
        }
        break;
      case DP_ID_Tuner_SAT_GameAlert_Team2Score_E_INT:
        if (m_tunerSATGameAlertTeam2Score != value.toInt()) {
            m_tunerSATGameAlertTeam2Score = value.toInt();
            emit tunerSATGameAlertTeam2ScoreChanged(m_tunerSATGameAlertTeam2Score);
        }
        break;
      case DP_ID_Tuner_SAT_GameTeams_LeagueID_E_INT:
        if (m_tunerSATGameTeamsLeagueID != value.toInt()) {
            m_tunerSATGameTeamsLeagueID = value.toInt();
            emit tunerSATGameTeamsLeagueIDChanged(m_tunerSATGameTeamsLeagueID);
        }
        break;
      case DP_ID_Tuner_SAT_PresetList_SelectedItem_IP_INT:
        if (m_tunerSATPresetListSelectedItem != value.toInt()) {
            m_tunerSATPresetListSelectedItem = value.toInt();
            emit tunerSATPresetListSelectedItemChanged(m_tunerSATPresetListSelectedItem);
        }
        break;
      case DP_ID_TLFav_5DayWeather_Available_E_INT:
        if (m_tLFav5DayWeatherAvailable != value.toInt()) {
            m_tLFav5DayWeatherAvailable = value.toInt();
            emit tLFav5DayWeatherAvailableChanged(m_tLFav5DayWeatherAvailable);
        }
        break;
      case DP_ID_TLFav_5DayWeather_DayOfWeek1_E_INT:
        if (m_tLFav5DayWeatherDayOfWeek1 != value.toInt()) {
            m_tLFav5DayWeatherDayOfWeek1 = value.toInt();
            emit tLFav5DayWeatherDayOfWeek1Changed(m_tLFav5DayWeatherDayOfWeek1);
        }
        break;
      case DP_ID_TLFav_5DayWeather_ImageEnum1_E_INT:
        if (m_tLFav5DayWeatherImageEnum1 != value.toInt()) {
            m_tLFav5DayWeatherImageEnum1 = value.toInt();
            emit tLFav5DayWeatherImageEnum1Changed(m_tLFav5DayWeatherImageEnum1);
        }
        break;
      case DP_ID_TLFav_5DayWeather_ImageEnum2_E_INT:
        if (m_tLFav5DayWeatherImageEnum2 != value.toInt()) {
            m_tLFav5DayWeatherImageEnum2 = value.toInt();
            emit tLFav5DayWeatherImageEnum2Changed(m_tLFav5DayWeatherImageEnum2);
        }
        break;
      case DP_ID_TLFav_5DayWeather_ImageEnum3_E_INT:
        if (m_tLFav5DayWeatherImageEnum3 != value.toInt()) {
            m_tLFav5DayWeatherImageEnum3 = value.toInt();
            emit tLFav5DayWeatherImageEnum3Changed(m_tLFav5DayWeatherImageEnum3);
        }
        break;
      case DP_ID_TLFav_5DayWeather_ImageEnum4_E_INT:
        if (m_tLFav5DayWeatherImageEnum4 != value.toInt()) {
            m_tLFav5DayWeatherImageEnum4 = value.toInt();
            emit tLFav5DayWeatherImageEnum4Changed(m_tLFav5DayWeatherImageEnum4);
        }
        break;
      case DP_ID_TLFav_5DayWeather_ImageEnum5_E_INT:
        if (m_tLFav5DayWeatherImageEnum5 != value.toInt()) {
            m_tLFav5DayWeatherImageEnum5 = value.toInt();
            emit tLFav5DayWeatherImageEnum5Changed(m_tLFav5DayWeatherImageEnum5);
        }
        break;
      case DP_ID_TLFav_5DayWeather_Temp1_E_INT:
        if (m_tLFav5DayWeatherTemp1 != value.toInt()) {
            m_tLFav5DayWeatherTemp1 = value.toInt();
            emit tLFav5DayWeatherTemp1Changed(m_tLFav5DayWeatherTemp1);
        }
        break;
      case DP_ID_TLFav_5DayWeather_Temp2_E_INT:
        if (m_tLFav5DayWeatherTemp2 != value.toInt()) {
            m_tLFav5DayWeatherTemp2 = value.toInt();
            emit tLFav5DayWeatherTemp2Changed(m_tLFav5DayWeatherTemp2);
        }
        break;
      case DP_ID_TLFav_5DayWeather_Temp3_E_INT:
        if (m_tLFav5DayWeatherTemp3 != value.toInt()) {
            m_tLFav5DayWeatherTemp3 = value.toInt();
            emit tLFav5DayWeatherTemp3Changed(m_tLFav5DayWeatherTemp3);
        }
        break;
      case DP_ID_TLFav_5DayWeather_Temp4_E_INT:
        if (m_tLFav5DayWeatherTemp4 != value.toInt()) {
            m_tLFav5DayWeatherTemp4 = value.toInt();
            emit tLFav5DayWeatherTemp4Changed(m_tLFav5DayWeatherTemp4);
        }
        break;
      case DP_ID_TLFav_5DayWeather_Temp5_E_INT:
        if (m_tLFav5DayWeatherTemp5 != value.toInt()) {
            m_tLFav5DayWeatherTemp5 = value.toInt();
            emit tLFav5DayWeatherTemp5Changed(m_tLFav5DayWeatherTemp5);
        }
        break;
      case DP_ID_TLFav_CurrWeather_Available_E_INT:
        if (m_tLFavCurrWeatherAvailable != value.toInt()) {
            m_tLFavCurrWeatherAvailable = value.toInt();
            emit tLFavCurrWeatherAvailableChanged(m_tLFavCurrWeatherAvailable);
        }
        break;
      case DP_ID_TLFav_CurrWeather_Precip_E_INT:
        if (m_tLFavCurrWeatherPrecip != value.toInt()) {
            m_tLFavCurrWeatherPrecip = value.toInt();
            emit tLFavCurrWeatherPrecipChanged(m_tLFavCurrWeatherPrecip);
        }
        break;
      case DP_ID_TLFav_CurrWeather_Temp_E_INT:
        if (m_tLFavCurrWeatherTemp != value.toInt()) {
            m_tLFavCurrWeatherTemp = value.toInt();
            emit tLFavCurrWeatherTempChanged(m_tLFavCurrWeatherTemp);
        }
        break;
      case DP_ID_TLFav_Fuel_Available_E_INT:
        if (m_tLFavFuelAvailable != value.toInt()) {
            m_tLFavFuelAvailable = value.toInt();
            emit tLFavFuelAvailableChanged(m_tLFavFuelAvailable);
        }
        break;
      case DP_ID_TLFav_Movie_Available_E_INT:
        if (m_tLFavMovieAvailable != value.toInt()) {
            m_tLFavMovieAvailable = value.toInt();
            emit tLFavMovieAvailableChanged(m_tLFavMovieAvailable);
        }
        break;
      case DP_ID_TL_ErrorCodes_E_INT:
        if (m_travelLinkErrorCodes != value.toInt()) {
            m_travelLinkErrorCodes = value.toInt();
            emit travelLinkErrorCodesChanged(m_travelLinkErrorCodes);
        }
        break;
      case DP_ID_TL_SubscriptionStatus_E_INT:
        if (m_travelLinkSubscriptionStatus != value.toInt()) {
            m_travelLinkSubscriptionStatus = value.toInt();
            emit travelLinkSubscriptionStatusChanged(m_travelLinkSubscriptionStatus);
        }
        break;
      case DP_ID_Weather_3HrPrecip_E_INT:
        if (m_weather3HrPrecip != value.toInt()) {
            m_weather3HrPrecip = value.toInt();
            emit weather3HrPrecipChanged(m_weather3HrPrecip);
        }
        break;
      case DP_ID_Weather_3HrTemperature_E_INT:
        if (m_weather3HrTemperature != value.toInt()) {
            m_weather3HrTemperature = value.toInt();
            emit weather3HrTemperatureChanged(m_weather3HrTemperature);
        }
        break;
      case DP_ID_Weather_3hr_ImageEnum_E_INT:
        if (m_weather3hrImageEnum != value.toInt()) {
            m_weather3hrImageEnum = value.toInt();
            emit weather3hrImageEnumChanged(m_weather3hrImageEnum);
        }
        break;
      case DP_ID_Weather_6HrPrecip_E_INT:
        if (m_weather6HrPrecip != value.toInt()) {
            m_weather6HrPrecip = value.toInt();
            emit weather6HrPrecipChanged(m_weather6HrPrecip);
        }
        break;
      case DP_ID_Weather_6HrTemperature_E_INT:
        if (m_weather6HrTemperature != value.toInt()) {
            m_weather6HrTemperature = value.toInt();
            emit weather6HrTemperatureChanged(m_weather6HrTemperature);
        }
        break;
      case DP_ID_Weather_6hr_ImageEnum_E_INT:
        if (m_weather6hrImageEnum != value.toInt()) {
            m_weather6hrImageEnum = value.toInt();
            emit weather6hrImageEnumChanged(m_weather6hrImageEnum);
        }
        break;
      case DP_ID_Weather_CloudCover_Enum_E_INT:
        if (m_weatherCloudCoverEnum != value.toInt()) {
            m_weatherCloudCoverEnum = value.toInt();
            emit weatherCloudCoverEnumChanged(m_weatherCloudCoverEnum);
        }
        break;
      case DP_ID_Weather_CurrHigh_E_INT:
        if (m_weatherCurrHigh != value.toInt()) {
            m_weatherCurrHigh = value.toInt();
            emit weatherCurrHighChanged(m_weatherCurrHigh);
        }
        break;
      case DP_ID_Weather_CurrLow_E_INT:
        if (m_weatherCurrLow != value.toInt()) {
            m_weatherCurrLow = value.toInt();
            emit weatherCurrLowChanged(m_weatherCurrLow);
        }
        break;
      case DP_ID_Weather_CurrentTemp_E_INT:
        if (m_weatherCurrentTemp != value.toInt()) {
            m_weatherCurrentTemp = value.toInt();
            emit weatherCurrentTempChanged(m_weatherCurrentTemp);
        }
        break;
      case DP_ID_Weather_Current_ImageEnum_E_INT:
        if (m_weatherCurrentImageEnum != value.toInt()) {
            m_weatherCurrentImageEnum = value.toInt();
            emit weatherCurrentImageEnumChanged(m_weatherCurrentImageEnum);
        }
        break;
      case DP_ID_TLFav_CurrentWeather_ImageEnum_E_INT:
        if (m_weatherCurrentFavImageEnum != value.toInt()) {
            m_weatherCurrentFavImageEnum = value.toInt();
            emit weatherCurrentFavImageEnumChanged(m_weatherCurrentFavImageEnum);
        }
        break;
      case DP_ID_Weather_Current_LocationID_E_INT:
        if (m_weatherCurrentLocationID != value.toInt()) {
            m_weatherCurrentLocationID = value.toInt();
            emit weatherCurrentLocationIDChanged(m_weatherCurrentLocationID);
        }
        break;
      case DP_ID_Weather_Day1Precip_E_INT:
        if (m_weatherDay1Precip != value.toInt()) {
            m_weatherDay1Precip = value.toInt();
            emit weatherDay1PrecipChanged(m_weatherDay1Precip);
        }
        break;
      case DP_ID_Weather_Day1_HighTemp_E_INT:
        if (m_weatherDay1HighTemp != value.toInt()) {
            m_weatherDay1HighTemp = value.toInt();
            emit weatherDay1HighTempChanged(m_weatherDay1HighTemp);
        }
        break;
      case DP_ID_Weather_Day1_ImageEnum_E_INT:
        if (m_weatherDay1ImageEnum != value.toInt()) {
            m_weatherDay1ImageEnum = value.toInt();
            emit weatherDay1ImageEnumChanged(m_weatherDay1ImageEnum);
        }
        break;
      case DP_ID_Weather_Day1_LowTemp_E_INT:
        if (m_weatherDay1LowTemp != value.toInt()) {
            m_weatherDay1LowTemp = value.toInt();
            emit weatherDay1LowTempChanged(m_weatherDay1LowTemp);
        }
        break;
      case DP_ID_Weather_Day2Precip_E_INT:
        if (m_weatherDay2Precip != value.toInt()) {
            m_weatherDay2Precip = value.toInt();
            emit weatherDay2PrecipChanged(m_weatherDay2Precip);
        }
        break;
      case DP_ID_Weather_Day2_HighTemp_E_INT:
        if (m_weatherDay2HighTemp != value.toInt()) {
            m_weatherDay2HighTemp = value.toInt();
            emit weatherDay2HighTempChanged(m_weatherDay2HighTemp);
        }
        break;
      case DP_ID_Weather_Day2_ImageEnum_E_INT:
        if (m_weatherDay2ImageEnum != value.toInt()) {
            m_weatherDay2ImageEnum = value.toInt();
            emit weatherDay2ImageEnumChanged(m_weatherDay2ImageEnum);
        }
        break;
      case DP_ID_Weather_Day2_LowTemp_E_INT:
        if (m_weatherDay2LowTemp != value.toInt()) {
            m_weatherDay2LowTemp = value.toInt();
            emit weatherDay2LowTempChanged(m_weatherDay2LowTemp);
        }
        break;
      case DP_ID_Weather_Day3Precip_E_INT:
        if (m_weatherDay3Precip != value.toInt()) {
            m_weatherDay3Precip = value.toInt();
            emit weatherDay3PrecipChanged(m_weatherDay3Precip);
        }
        break;
      case DP_ID_Weather_Day3_HighTemp_E_INT:
        if (m_weatherDay3HighTemp != value.toInt()) {
            m_weatherDay3HighTemp = value.toInt();
            emit weatherDay3HighTempChanged(m_weatherDay3HighTemp);
        }
        break;
      case DP_ID_Weather_Day3_ImageEnum_E_INT:
        if (m_weatherDay3ImageEnum != value.toInt()) {
            m_weatherDay3ImageEnum = value.toInt();
            emit weatherDay3ImageEnumChanged(m_weatherDay3ImageEnum);
        }
        break;
      case DP_ID_Weather_Day3_LowTemp_E_INT:
        if (m_weatherDay3LowTemp != value.toInt()) {
            m_weatherDay3LowTemp = value.toInt();
            emit weatherDay3LowTempChanged(m_weatherDay3LowTemp);
        }
        break;
      case DP_ID_Weather_Day4Precip_E_INT:
        if (m_weatherDay4Precip != value.toInt()) {
            m_weatherDay4Precip = value.toInt();
            emit weatherDay4PrecipChanged(m_weatherDay4Precip);
        }
        break;
      case DP_ID_Weather_Day4_HighTemp_E_INT:
        if (m_weatherDay4HighTemp != value.toInt()) {
            m_weatherDay4HighTemp = value.toInt();
            emit weatherDay4HighTempChanged(m_weatherDay4HighTemp);
        }
        break;
      case DP_ID_Weather_Day4_ImageEnum_E_INT:
        if (m_weatherDay4ImageEnum != value.toInt()) {
            m_weatherDay4ImageEnum = value.toInt();
            emit weatherDay4ImageEnumChanged(m_weatherDay4ImageEnum);
        }
        break;
      case DP_ID_Weather_Day4_LowTemp_E_INT:
        if (m_weatherDay4LowTemp != value.toInt()) {
            m_weatherDay4LowTemp = value.toInt();
            emit weatherDay4LowTempChanged(m_weatherDay4LowTemp);
        }
        break;
      case DP_ID_Weather_Day5Precip_E_INT:
        if (m_weatherDay5Precip != value.toInt()) {
            m_weatherDay5Precip = value.toInt();
            emit weatherDay5PrecipChanged(m_weatherDay5Precip);
        }
        break;
      case DP_ID_Weather_Day5_HighTemp_E_INT:
        if (m_weatherDay5HighTemp != value.toInt()) {
            m_weatherDay5HighTemp = value.toInt();
            emit weatherDay5HighTempChanged(m_weatherDay5HighTemp);
        }
        break;
      case DP_ID_Weather_Day5_ImageEnum_E_INT:
        if (m_weatherDay5ImageEnum != value.toInt()) {
            m_weatherDay5ImageEnum = value.toInt();
            emit weatherDay5ImageEnumChanged(m_weatherDay5ImageEnum);
        }
        break;
      case DP_ID_Weather_Day5_LowTemp_E_INT:
        if (m_weatherDay5LowTemp != value.toInt()) {
            m_weatherDay5LowTemp = value.toInt();
            emit weatherDay5LowTempChanged(m_weatherDay5LowTemp);
        }
        break;
      case DP_ID_Weather_Forecast_DayOfWeek1_E_INT:
        if (m_weatherForecastDayOfWeek1 != value.toInt()) {
            m_weatherForecastDayOfWeek1 = value.toInt();
            emit weatherForecastDayOfWeek1Changed(m_weatherForecastDayOfWeek1);
        }
        break;
      case DP_ID_Weather_HumidityPercent_E_INT:
        if (m_weatherHumidityPercent != value.toInt()) {
            m_weatherHumidityPercent = value.toInt();
            emit weatherHumidityPercentChanged(m_weatherHumidityPercent);
        }
        break;
      case DP_ID_Weather_PrecipDetails_E_INT:
        if (m_weatherPrecipDetails != value.toInt()) {
            m_weatherPrecipDetails = value.toInt();
            emit weatherPrecipDetailsChanged(m_weatherPrecipDetails);
        }
        break;
      case DP_ID_Weather_PrecipDetails_E_FLOAT:
        if (m_weatherPrecipAmount != value.toFloat()) {
            m_weatherPrecipAmount = value.toFloat();
            emit weatherPrecipAmountChanged(m_weatherPrecipAmount);
        }
        break;
      case DP_ID_Weather_SkiCond_BaseDepthMax_E_INT:
        if (m_weatherSkiCondBaseDepthMax != value.toInt()) {
            m_weatherSkiCondBaseDepthMax = value.toInt();
            emit weatherSkiCondBaseDepthMaxChanged(m_weatherSkiCondBaseDepthMax);
        }
        break;
      case DP_ID_Weather_SkiCond_BaseDepthMin_E_INT:
        if (m_weatherSkiCondBaseDepthMin != value.toInt()) {
            m_weatherSkiCondBaseDepthMin = value.toInt();
            emit weatherSkiCondBaseDepthMinChanged(m_weatherSkiCondBaseDepthMin);
        }
        break;
      case DP_ID_Weather_SkiCond_Temp_E_INT:
        if (m_weatherSkiCondTemp != value.toInt()) {
            m_weatherSkiCondTemp = value.toInt();
            emit weatherSkiCondTempChanged(m_weatherSkiCondTemp);
        }
        break;
      case DP_ID_Weather_Ski_ImageEnum_E_INT:
        if (m_weatherSkiImageEnum != value.toInt()) {
            m_weatherSkiImageEnum = value.toInt();
            emit weatherSkiImageEnumChanged(m_weatherSkiImageEnum);
        }
        break;
      case DP_ID_Weather_UVIndex_E_INT:
        if (m_weatherUVIndex != value.toInt()) {
            m_weatherUVIndex = value.toInt();
            emit weatherUVIndexChanged(m_weatherUVIndex);
        }
        break;
      case DP_ID_Weather_WindSpeed_E_INT:
        if (m_weatherWindSpeed != value.toInt()) {
            m_weatherWindSpeed = value.toInt();
            emit weatherWindSpeedChanged(m_weatherWindSpeed);
        }
        break;
      case DP_ID_Weather_WindDirection_E_INT:
        if (m_weatherWindDirection != value.toInt()) {
            m_weatherWindDirection = value.toInt();
            emit weatherWindDirectionChanged(m_weatherWindDirection);
        }
        break;
      default:
        break;
    }
}

void TLSource::messageEventReceived(quint32 group, quint32 id, const QVariantList &value)
{
    Q_UNUSED(value);

    switch (group) {
    case EVENT_GRP_ID_Ic_TLWeather_AlphaJumpOpened:
        switch (id) {
        case EVENT_MSG_ID_Ic_TLWeather_AlphaJumpOpened:
            emit aZJumpWeatherIndexUpdated();
            break;
        case EVENT_MSG_ID_Ic_TLWeatherState_AlphaJumpOpened:
            emit aZJumpWeatherStateIndexUpdated();
            break;
        case EVENT_MSG_ID_Ic_TLWeatherSkiArea_AlphaJumpOpened:
            emit aZJumpWeatherSkiIndexUpdated();
            break;
        case EVENT_MSG_ID_Ic_TLWeatherSkiState_AlphaJumpOpened:
            emit aZJumpWeatherSkiStateIndexUpdated();
            break;
        }
    }
}

void TLSource::writeStoredProperty(const QByteArray &propertyName, const QVariant &val)
{
    Q_UNUSED(propertyName);
    Q_UNUSED(val);
}

void TLSource::requestCurrentForecast()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestCurrentForecast,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestCurrentForecast,
                                                  params);
}

void TLSource::requestNearestForecast()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestNearestForecast,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestNearestForecast,
                                                  params);
}

void TLSource::request3HrForecast()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_Request3HourForecast,
                                                  EVENT_MSG_ID_Evt_TLWeather_Request3HourForecast,
                                                  params);
}

void TLSource::request5DayForecast()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_Request5DayForecast,
                                                  EVENT_MSG_ID_Evt_TLWeather_Request5DayForecast,
                                                  params);
}

void TLSource::requestCurrentSkiInfo()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestCurrentSkiConditions,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestCurrentSkiConditions,
                                                  params);
}

void TLSource::requestNearestSkiInfo()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestNearestSkiConditions,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestNearestSkiConditions,
                                                  params);
}

void TLSource::requestSkiStatesList()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestSkiStateList,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestSkiStateList,
                                                  params);
}

void TLSource::requestSkiAreaList(int stateId)
{
    QVariantList params;
    params << stateId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestSkiAreaList,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestSkiAreaList,
                                                  params);
}

void TLSource::requestWeatherStatesList()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestStateList,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestStateList,
                                                  params);
}

void TLSource::requestWeatherCityList(int stateId)
{
    QVariantList params;
    params << stateId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestCityList,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestCityList,
                                                  params);
}

void TLSource::updateAZWeatherStateJumpIndex(int language, const QString &source)
{
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeatherState_OpenAlphaJump,
                                                  EVENT_MSG_ID_Evt_TLWeatherState_OpenAlphaJump,
                                                  QVariantList() << language << source);
}

void TLSource::updateAZWeatherJumpIndex(int language, const QString &source)
{
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_OpenAlphaJump,
                                                  EVENT_MSG_ID_Evt_TLWeather_OpenAlphaJump,
                                                  QVariantList() << language << source);
}

void TLSource::updateAZWeatherSkiStateJumpIndex(int language, const QString &source)
{
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeatherSkiState_OpenAlphaJump,
                                                  EVENT_MSG_ID_Evt_TLWeatherSkiState_OpenAlphaJump,
                                                  QVariantList() << language << source);
}

void TLSource::updateAZWeatherSkiJumpIndex(int language, const QString &source)
{
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeatherSkiArea_OpenAlphaJump,
                                                  EVENT_MSG_ID_Evt_TLWeatherSkiArea_OpenAlphaJump,
                                                  QVariantList() << language << source);
}

void TLSource::requestWeatherCityForecast(int cityId)
{
    QVariantList params;
    params << cityId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestCityForecast,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestCityForecast,
                                                  params);
}

void TLSource::requestSkiAreaForecast(int areaId, int stateId)
{
    QVariantList params;
    params << areaId << stateId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestSkiAreaForecast,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestSkiAreaForecast,
                                                  params);
}

void TLSource::requestSubscriptionStatus()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSubscription_RequestStatus,
                                                  EVENT_MSG_ID_Evt_TLSubscription_RequestStatus,
                                                  params);
}

void TLSource::requestSportsDailyScoreList()
{
    QVariantList params;
    //league, team, date ids undefined
    params << -1 << -1 << -1;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_DailyScoreListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_DailyScoreListRequested,
                                                  params);
}

void TLSource::requestLeagueDailyScoresList(int dateId)
{
    QVariantList params;
    if (sportsLeagueDivisionType() < 1) m_currentDivisionId = -1;
    params << m_currentLeagueId << m_currentDivisionId << dateId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_DailyScoreListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_DailyScoreListRequested,
                                                  params);
}

void TLSource::requestFavoritesList()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFav_RequestFavoritesList,
                                                  EVENT_MSG_ID_Evt_TLFav_RequestFavoritesList,
                                                  params);
}

void TLSource::requestWeather5DayFavorite()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestFavorite5DayForecast,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestFavorite5DayForecast,
                                                  params);
}

void TLSource::requestWeatherFavorite()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_RequestFavoriteForecast,
                                                  EVENT_MSG_ID_Evt_TLWeather_RequestFavoriteForecast,
                                                  params);
}

void TLSource::deleteCurrentWeatherFavorite()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFav_Weather_DeleteCurrentFavorite,
                                                  EVENT_MSG_ID_Evt_TLFav_Weather_DeleteCurrentFavorite,
                                                  params);
}

void TLSource::addCurrentWeatherFavorite()
{
    QVariantList params;
    params << weatherCurrentLocationID();
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLWeather_AddCurrentFavorite,
                                                  EVENT_MSG_ID_Evt_TLWeather_AddCurrentFavorite,
                                                  params);
}

void TLSource::requestFuelFavorite()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFav_Fuel_RequestFavStationInfo,
                                                  EVENT_MSG_ID_Evt_TLFav_Fuel_RequestFavStationInfo,
                                                  params);
}

void TLSource::deleteFavoriteTeam(int leagueId, int teamId)
{
    QVariantList params;
    params << leagueId << teamId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFav_Sports_DeleteTeam,
                                                  EVENT_MSG_ID_Evt_TLFav_Sports_DeleteTeam,
                                                  params);
}

void TLSource::replaceFavoriteTeam(int leagueId, int teamId, int oldLeagueId, int oldTeamId)
{
    QVariantList params;
    params << leagueId << teamId << oldLeagueId << oldTeamId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_ReplaceFavoriteTeam,
                                                  EVENT_MSG_ID_Evt_TLSports_ReplaceFavoriteTeam,
                                                  params);
}

void TLSource::addFavoriteTeam()
{
    QVariantList params;
    params << currentLeagueId() << sportsDetailsTeamID();
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_AddFavoriteTeam,
                                                  EVENT_MSG_ID_Evt_TLSports_AddFavoriteTeam,
                                                  params);
}

void TLSource::deleteCurrentFuelFavorite()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFav_Fuel_DeleteFavorite,
                                                  EVENT_MSG_ID_Evt_TLFav_Fuel_DeleteFavorite,
                                                  params);
}

void TLSource::addCurrentFuelFavorite()
{
    QVariantList params;
    params << fuelStationInfoID();
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFuel_AddFavStation,
                                                  EVENT_MSG_ID_Evt_TLFuel_AddFavStation,
                                                  params);
}

void TLSource::requestFuelList()
{
    if (m_fuelPriceSortingType == ByPriceFuelPrices) {
        requestFuelPricesList();
    } else if (m_fuelPriceSortingType == ByDistanceFuelPrices) {
        requestFuelDistanceList();
    } else if (m_fuelPriceSortingType == ByNameFuelPrices) {
        requestFuelNameList();
    }
}

void TLSource::requestFuelPricesList()
{
    if (m_fuelPriceSortingType != ByPriceFuelPrices) {
        m_fuelPriceSortingType = ByPriceFuelPrices;
        emit fuelPriceSortingTypeChanged(m_fuelPriceSortingType);
    }

    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFuel_SortByPrice,
                                                  EVENT_MSG_ID_Evt_TLFuel_SortByPrice,
                                                  params);
}

void TLSource::requestFuelDistanceList()
{
    if (m_fuelPriceSortingType != ByDistanceFuelPrices) {
        m_fuelPriceSortingType = ByDistanceFuelPrices;
        emit fuelPriceSortingTypeChanged(m_fuelPriceSortingType);
    }

    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFuel_SortByDistance,
                                                  EVENT_MSG_ID_Evt_TLFuel_SortByDistance,
                                                  params);
}

void TLSource::requestFuelNameList()
{
    if (m_fuelPriceSortingType != ByNameFuelPrices) {
        m_fuelPriceSortingType = ByNameFuelPrices;
        emit fuelPriceSortingTypeChanged(m_fuelPriceSortingType);
    }

    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFuel_SortByBrand,
                                                  EVENT_MSG_ID_Evt_TLFuel_SortByBrand,
                                                  params);
}

void TLSource::requestFuelTypesList()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFuel_RequestTypeList,
                                                  EVENT_MSG_ID_Evt_TLFuel_RequestTypeList,
                                                  params);
}

void TLSource::selectFuelType(int typeId)
{
    QVariantList params;
    params << typeId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFuel_TypeSelected,
                                                  EVENT_MSG_ID_Evt_TLFuel_TypeSelected,
                                                  params);
}

QString TLSource::selectedTypeName() const
{
    for (int i = 0; i < fuelTypesModel()->count(); i++) {
        QModelIndex index = fuelTypesModel()->index(i);
        bool selected = fuelTypesModel()->data(index, fuelTypesModel()->roleForKey("typeSelected")).toBool();
        if (selected) {
            return fuelTypesModel()->data(index, fuelTypesModel()->roleForKey("typeName")).toString();
        }
    }
    return QString();
}

void TLSource::requestFuelStationInfo(int stationId)
{
    QVariantList params;
    params << stationId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFuel_RequestStationInfo,
                                                  EVENT_MSG_ID_Evt_TLFuel_RequestStationInfo,
                                                  params);
}

void TLSource::requestFuelStationPrices(int stationId)
{
    QVariantList params;
    params << stationId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFuel_RequestPriceInfo,
                                                  EVENT_MSG_ID_Evt_TLFuel_RequestPriceInfo,
                                                  params);
}

void TLSource::requestSportsList()
{
    QVariantList params;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_RequestLeagueList,
                                                  EVENT_MSG_ID_Evt_TLSports_RequestLeagueList,
                                                  params);
}

void TLSource::requestLeagueCategoryList(int leagueId)
{
    m_currentLeagueId = leagueId;
    m_currentLeagueName = m_sportsLeaguesModel->data(m_sportsLeaguesModel->index(leagueId),
                                                     m_sportsLeaguesModel->roleForKey("leagueName")).toString();
    emit currentLeagueNameChanged(m_currentLeagueName);

    QVariantList params;
    params << leagueId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_LeagueCategoryListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_LeagueCategoryListRequested,
                                                  params);
}

void TLSource::requestLeagueTeamsList()
{
    QVariantList params;
    //divisionID and divisionList Parameters not defined here
    params << m_currentLeagueId << -1 << -1;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_TeamListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_TeamListRequested,
                                                  params);
}

void TLSource::requestLeagueHeadlinesList()
{
    QVariantList params;
    params << m_currentLeagueId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_HeadlineListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_HeadlineListRequested,
                                                  params);
}

void TLSource::requestLeagueTop25List()
{
    QVariantList params;
    params << m_currentLeagueId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_Top25ListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_Top25ListRequested,
                                                  params);
}

void TLSource::requestDivisionTeamsList(int divisionId)
{
    QVariantList params;
    //divisionList Parameter not defined here
    m_currentDivisionId = divisionId;
    params << m_currentLeagueId << m_currentDivisionId << -1;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_TeamListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_TeamListRequested,
                                                  params);
}

void TLSource::requestLeagueScheduleDatesList()
{
    QVariantList params;
    //divisionID and divisionList Parameters not defined here
    params << m_currentLeagueId << -1 << -1;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_ScheduleDatesListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_ScheduleDatesListRequested,
                                                  params);
}

void TLSource::requestDivisionScheduleDatesList(int divisionId)
{
    QVariantList params;
    //divisionList Parameter not defined here
    m_currentDivisionId = divisionId;
    params << m_currentLeagueId << m_currentDivisionId << -1;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_ScheduleDatesListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_ScheduleDatesListRequested,
                                                  params);
}

void TLSource::requestLeagueDivisionsList()
{
    QVariantList params;
    params << m_currentLeagueId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_DivisionListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_DivisionListRequested,
                                                  params);
}

void TLSource::requestLeagueTeamDetails(int leagueId, int teamId)
{
    QVariantList params;
    params << leagueId << teamId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_RequestTeamDetails,
                                                  EVENT_MSG_ID_Evt_TLSports_RequestTeamDetails,
                                                  params);
}

void TLSource::requestLeagueScoreDetails(int index)
{
    QModelIndex modelIndex = m_scoreScheduleModel->index(index);
    m_scoreDetailsTeam1isFAV = m_scoreScheduleModel->data(modelIndex,
                                                          m_scoreScheduleModel->roleForKey("team1isFAV")).toBool();
    m_scoreDetailsTeam2isFAV = m_scoreScheduleModel->data(modelIndex,
                                                          m_scoreScheduleModel->roleForKey("team2isFAV")).toBool();
    m_scoreDetailsTeam1ID = m_scoreScheduleModel->data(modelIndex,
                                                       m_scoreScheduleModel->roleForKey("team1ID")).toInt();
    m_scoreDetailsTeam2ID = m_scoreScheduleModel->data(modelIndex,
                                                       m_scoreScheduleModel->roleForKey("team2ID")).toInt();
    m_scoreDetailsTeam1Scores = m_scoreScheduleModel->data(modelIndex,
                                                           m_scoreScheduleModel->roleForKey("team1Scores")).toInt();
    m_scoreDetailsTeam2Scores = m_scoreScheduleModel->data(modelIndex,
                                                           m_scoreScheduleModel->roleForKey("team2Scores")).toInt();
    m_scoreDetailsTime = m_scoreScheduleModel->data(modelIndex,
                                                    m_scoreScheduleModel->roleForKey("time")).toString();
    m_scoreDetailsTeam1Name = m_scoreScheduleModel->data(modelIndex,
                                                         m_scoreScheduleModel->roleForKey("team1Names")).toString();
    m_scoreDetailsTeam2Name = m_scoreScheduleModel->data(modelIndex,
                                                         m_scoreScheduleModel->roleForKey("team2Names")).toString();
    m_scoreDetailsTeam1Abbrv = m_scoreScheduleModel->data(modelIndex,
                                                          m_scoreScheduleModel->roleForKey("team1Abbrv")).toString();
    m_scoreDetailsTeam2Abbrv = m_scoreScheduleModel->data(modelIndex,
                                                          m_scoreScheduleModel->roleForKey("team2Abbrv")).toString();
    m_scoreDetailsListenNational = m_scoreScheduleModel->data(modelIndex,
                                                              m_scoreScheduleModel->roleForKey("listenNational")).toBool();
    m_scoreDetailsListenAway = m_scoreScheduleModel->data(modelIndex,
                                                          m_scoreScheduleModel->roleForKey("listenAway")).toBool();
    m_scoreDetailsListenHome = m_scoreScheduleModel->data(modelIndex,
                                                          m_scoreScheduleModel->roleForKey("listenHome")).toBool();
    m_scoreDetailsClockHours = m_scoreScheduleModel->data(modelIndex,
                                                          m_scoreScheduleModel->roleForKey("clockHours")).toInt();
    m_scoreDetailsClockMinutes = m_scoreScheduleModel->data(modelIndex,
                                                            m_scoreScheduleModel->roleForKey("clockMinutes")).toInt();
    m_scoreDetailsListenAwayCh = m_scoreScheduleModel->data(modelIndex,
                                                            m_scoreScheduleModel->roleForKey("listenAwayCh")).toInt();
    m_scoreDetailsListenHomeCh = m_scoreScheduleModel->data(modelIndex,
                                                            m_scoreScheduleModel->roleForKey("listenHomeCh")).toInt();
    m_scoreDetailsListenNationalCh = m_scoreScheduleModel->data(modelIndex,
                                                                m_scoreScheduleModel->roleForKey("listenNationalCh")).toInt();
    m_scoreDetailsStartHours = m_scoreScheduleModel->data(modelIndex,
                                                          m_scoreScheduleModel->roleForKey("startHours")).toInt();
    m_scoreDetailsStartMinutes = m_scoreScheduleModel->data(modelIndex,
                                                            m_scoreScheduleModel->roleForKey("startMinutes")).toInt();
    m_scoreDetailsType = m_scoreScheduleModel->data(modelIndex,
                                                    m_scoreScheduleModel->roleForKey("scoreType")).toInt();
    emit scoreDetailsChanged();
}

void TLSource::requestLeagueResultsEventDetails(int eventId)
{
    QVariantList params;
    m_currentEventId = eventId;
    params << m_currentLeagueId << m_currentEventId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_RequestEventInfo,
                                                  EVENT_MSG_ID_Evt_TLSports_RequestEventInfo,
                                                  params);
}

void TLSource::requestLeagueResultsEventStandings()
{
    QVariantList params;
    params << m_currentLeagueId << m_currentEventId;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_RequestEventStandings,
                                                  EVENT_MSG_ID_Evt_TLSports_RequestEventStandings,
                                                  params);
}

void TLSource::requestScheduleDatesList()
{
    QVariantList params;
    //divisionID and divisionList Parameters not defined here
    params << m_currentLeagueId << -1 << -1;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSports_ScheduleDatesListRequested,
                                                  EVENT_MSG_ID_Evt_TLSports_ScheduleDatesListRequested,
                                                  params);
}

void TLSource::setWeatherType(int type)
{
    if (type != m_weatherType) {
        m_weatherType = type;
        emit weatherTypeChanged(m_weatherType);
    }
}

void TLSource::callFuelStation()
{
    QVariantList params;
    params << m_fuelStationInfoPhoneNum;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFuel_CallStation,
                                                  EVENT_MSG_ID_Evt_TLFuel_CallStation,
                                                  params);
}

void TLSource::navToFuelStation()
{
    QVariantList params;
    params << fuelStationInfoID();
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLFuel_NavToStation,
                                                  EVENT_MSG_ID_Evt_TLFuel_NavToStation,
                                                  params);
}

void TLSource::callSubscription()
{
    QVariantList params;
    params << m_travelLinkPhoneNum;
    HMI2ALMessageSender::instance()->sendHMIEvent(EVENT_GRP_ID_Evt_TLSubscription_Call,
                                                  EVENT_MSG_ID_Evt_TLSubscription_Call,
                                                  params);
}
